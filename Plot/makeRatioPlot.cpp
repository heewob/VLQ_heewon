#include <TStyle.h>
#include <TFile.h>
#include <TTree.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <iostream>
#include <TAxis.h>
#include <TMath.h>
#include <iomanip>
#include <cmath>
#include <TH1F.h>
#include <TVirtualPad.h>
#include <TRatioPlot.h>
int main(){
        int Npoint = (3000-0)/50 + 1;
        double masses[Npoint];
        for (int j = 0; j <Npoint; j++){
                masses[j] = 0+j*50;
        }
	
	TFile *signal = TFile::Open("/eos/uscms/store/user/chungh/combinedROOT/TprimeTprime1800_2017_nom_combined.root");
	//signal->ls();
	TDirectoryFile *sigDir = (TDirectoryFile*)signal->Get("selcetionStudy_Et100");
	TTree *signal_tree = (TTree*)sigDir->Get("tree_nom_Et100.000000");

	TFile *bkg1 = TFile::Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC1000to1500_2017_nom_combined.root");
	TDirectoryFile *bkgDir1 = (TDirectoryFile*)bkg1->Get("selcetionStudy_Et100");
        TTree *bkg_tree1 = (TTree*)bkgDir1->Get("tree_nom_Et100.000000");

	TFile *bkg2 = TFile::Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC1500to2000_2017_nom_combined.root");
	TDirectoryFile *bkgDir2 = (TDirectoryFile*)bkg2->Get("selcetionStudy_Et100");
        TTree *bkg_tree2 = (TTree*)bkgDir2->Get("tree_nom_Et100.000000");

	TFile *bkg3 = TFile::Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC2000toInf_2017_nom_combined.root");
	TDirectoryFile *bkgDir3 = (TDirectoryFile*)bkg3->Get("selcetionStudy_Et100");
        TTree *bkg_tree3 = (TTree*)bkgDir3->Get("tree_nom_Et100.000000");


	if (!signal || !bkg1 || !bkg2 || !bkg3) {
        	std::cerr <<"Error: could not open ROOT files" << std::endl;
	        return 0;                     
        }  
	if (!signal_tree || !bkg_tree1 || !bkg_tree2 || !bkg_tree3) {
	        std::cerr <<"trees are null" << std::endl;
                return 0;
        }


	//TH1F *sig_hist = new TH1F("sig_hist", "Super Jet Mass (Jet Et cut 100 GeV)", Npoint, -50, 3050);
	signal_tree->Draw("superJet_mass>>sig_hist(61,-50,3050)");
        std::cout << "00" <<std::endl;
        std::cout << "sig_hist class name:" << gPad->GetPrimitive("sig_hist")->ClassName() << "\n";
        std::cout << "0" <<std::endl;
	auto sig_hist = (TH1F*) gPad->GetPrimitive("sig_hist")->Clone("cloned_sig_hist");
        std::cout << "1" <<std::endl;
        if (!sig_hist)
        {std::cerr << "sig_hist is nullptr, existing...\n";
         return 1;
        }
	sig_hist->Scale(0.00001064);
        std::cout << "2" <<std::endl;

        TH1F *bkg_hist_sum = new TH1F("bkg_hist_sum", "Super Jet Mass (Jet Et cut 100 GeV)", Npoint, -50, 3050);
        //TH1F *bkg_hist_1 = new TH1F("bkg_hist_1", "QCD SJ mass HT 1000 to 1500", Npoint, -50, 3050);
        //TH1F *bkg_hist_2 = new TH1F("bkg_hist_2", "QCD SJ mass HT 1500 to 2000", Npoint, -50, 3050);
        //TH1F *bkg_hist_3 = new TH1F("bkg_hist_3", "QCD SJ mass HT 2000 to inf", Npoint, -50, 3050);
        bkg_tree1->Draw("superJet_mass>>bkg_hist_1(61,-50,3050)");
        auto bkg_hist_1 = (TH1F*) gPad->GetPrimitive("bkg_hist_1")->Clone("cloned_bkg_hist_1");
        bkg_tree2->Draw("superJet_mass>>bkg_hist_2(61,-50,3050)");
        auto bkg_hist_2 = (TH1F*) gPad->GetPrimitive("bkg_hist_2")->Clone("cloned_bkg_hist_2");
        bkg_tree3->Draw("superJet_mass>>bkg_hist_3(61,-50,3050)");
        auto bkg_hist_3 = (TH1F*) gPad->GetPrimitive("bkg_hist_3")->Clone("cloned_bkg_hist_3");
        std::cout << "3" <<std::endl;
	//apply scale factors for 2017 QCD (1000-1500: 3.126, 1500-2000: 3.197, 2000-inf: 0.14)
	bkg_hist_1->Scale(3.126);
	bkg_hist_sum->Add(bkg_hist_1);
        bkg_hist_2->Scale(0.3197);
        bkg_hist_sum->Add(bkg_hist_2);
        bkg_hist_1->Scale(0.14);
        bkg_hist_sum->Add(bkg_hist_3);
        std::cout << "4" <<std::endl;

	bkg_hist_sum->SetLineColor(kRed);
	sig_hist->SetLineWidth(2);
	bkg_hist_sum->SetLineWidth(2);
        std::cout << "5" <<std::endl;
	TH1F *sqrtHist = (TH1F*)sig_hist->Clone("sqrtHist");
        std::cout << "6" <<std::endl;
        sqrtHist->SetTitle("sqrt(QCD)");
	sqrtHist->Reset();
        std::cout << "7" <<std::endl;
	//Error checking
        if (!sqrtHist) {
                std::cerr <<"cloning sqrtHist failed" << std::endl;
                return 0;
        }


	for (int i = 1; i<bkg_hist_sum->GetNbinsX(); ++i){
		double bkg_content = bkg_hist_sum->GetBinContent(i);
		std::cout << "bkgsum bin: " << i << ",  binContent: " << bkg_content << std::endl;

		sqrtHist->SetBinContent(i, sqrt(bkg_content));
		}

        for (int i = 1; i<sqrtHist->GetNbinsX(); ++i){
                double bkg_content_ = sqrtHist->GetBinContent(i);
                std::cout << "sqrtHist bin: " << i << ",  binContent: " << bkg_content_ << std::endl;

                }

        sqrtHist->Print();
        bkg_hist_sum->Print();
        std::cout << "8" <<std::endl;	

	TCanvas* can = new TCanvas();
	//TRatioPlot* rp = new TRatioPlot(sig_hist,sqrtHist);
	//rp->Draw();
        std::cout << "9" <<std::endl;
	//rp->GetLowerPad()->SetTitle("Signal/sqrt(QCD)");
	//rp->GetUpperPad()->cd();
	//TLegend* legend = new TLegend(0.7, 0.6, 0.9, 0.8);
	//legend->AddEntry(sig_hist,"signal (2017 1800GeV)", "lp");
	//legend->AddEntry(bkg_hist_sum,"background QCD (2017)", "lp");
	//legend->Draw();
	//rp->GetUpperPad()->SetLogy();
	bkg_hist_sum->Draw("SAME");
        sqrtHist->Draw("SAME");
        //sig_hist->Draw("SAME");
        std::cout << "10" <<std::endl;

   	//rp->GetUpperPad()->RangeAxis(0, 0, 2000, 500000);
  	//rp->GetLowerPad()->SetTitle("Signal / sqrt(QCD)");
  	can->Update();
        std::cout << "11" <<std::endl;
  	can->SaveAs("SJ_efficiency_2017_1800GeV_sigvsQCD_jet100.C");
	std::cout << "12" <<std::endl;
	signal->Close();
	bkg1->Close();
        bkg2->Close();
        bkg3->Close();
        std::cout << "13" <<std::endl;

return 0;
}

