void SJ_efficiency_2017_1000GeV_sigvsQCD_jet250()
{
//=========Macro generated from canvas: c1_n2/c1_n2
//=========  (Tue Oct 22 09:57:14 2024) by ROOT version 6.14/09
   TCanvas *c1_n2 = new TCanvas("c1_n2", "c1_n2",0,0,700,500);
   c1_n2->SetHighLightColor(2);
   c1_n2->Range(0,0,1,1);
   c1_n2->SetFillColor(0);
   c1_n2->SetBorderMode(0);
   c1_n2->SetBorderSize(2);
   c1_n2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad->Draw();
   upper_pad->cd();
   upper_pad->Range(-437.5,-11189.23,3437.5,212595.4);
   upper_pad->SetFillColor(0);
   upper_pad->SetBorderMode(0);
   upper_pad->SetBorderSize(2);
   upper_pad->SetBottomMargin(0.05);
   upper_pad->SetFrameBorderMode(0);
   upper_pad->SetFrameBorderMode(0);
   
   TH1F *sig_hist__1 = new TH1F("sig_hist__1","Super Jet Mass (Jet Et cut 250 GeV)",61,-50,3050);
   sig_hist__1->SetBinContent(2,66779);
   sig_hist__1->SetBinContent(3,179145);
   sig_hist__1->SetBinContent(4,181159);
   sig_hist__1->SetBinContent(5,129112);
   sig_hist__1->SetBinContent(6,58299);
   sig_hist__1->SetBinContent(7,36620);
   sig_hist__1->SetBinContent(8,24230);
   sig_hist__1->SetBinContent(9,19781);
   sig_hist__1->SetBinContent(10,20003);
   sig_hist__1->SetBinContent(11,20816);
   sig_hist__1->SetBinContent(12,21189);
   sig_hist__1->SetBinContent(13,21928);
   sig_hist__1->SetBinContent(14,22350);
   sig_hist__1->SetBinContent(15,23445);
   sig_hist__1->SetBinContent(16,25769);
   sig_hist__1->SetBinContent(17,30050);
   sig_hist__1->SetBinContent(18,37841);
   sig_hist__1->SetBinContent(19,45184);
   sig_hist__1->SetBinContent(20,40990);
   sig_hist__1->SetBinContent(21,25383);
   sig_hist__1->SetBinContent(22,15009);
   sig_hist__1->SetBinContent(23,10798);
   sig_hist__1->SetBinContent(24,8344);
   sig_hist__1->SetBinContent(25,6682);
   sig_hist__1->SetBinContent(26,5466);
   sig_hist__1->SetBinContent(27,4412);
   sig_hist__1->SetBinContent(28,3590);
   sig_hist__1->SetBinContent(29,2865);
   sig_hist__1->SetBinContent(30,2293);
   sig_hist__1->SetBinContent(31,1801);
   sig_hist__1->SetBinContent(32,1374);
   sig_hist__1->SetBinContent(33,1130);
   sig_hist__1->SetBinContent(34,907);
   sig_hist__1->SetBinContent(35,734);
   sig_hist__1->SetBinContent(36,566);
   sig_hist__1->SetBinContent(37,435);
   sig_hist__1->SetBinContent(38,359);
   sig_hist__1->SetBinContent(39,253);
   sig_hist__1->SetBinContent(40,193);
   sig_hist__1->SetBinContent(41,151);
   sig_hist__1->SetBinContent(42,137);
   sig_hist__1->SetBinContent(43,95);
   sig_hist__1->SetBinContent(44,80);
   sig_hist__1->SetBinContent(45,51);
   sig_hist__1->SetBinContent(46,48);
   sig_hist__1->SetBinContent(47,40);
   sig_hist__1->SetBinContent(48,27);
   sig_hist__1->SetBinContent(49,26);
   sig_hist__1->SetBinContent(50,20);
   sig_hist__1->SetBinContent(51,21);
   sig_hist__1->SetBinContent(52,11);
   sig_hist__1->SetBinContent(53,8);
   sig_hist__1->SetBinContent(54,9);
   sig_hist__1->SetBinContent(55,1);
   sig_hist__1->SetBinContent(56,4);
   sig_hist__1->SetBinContent(57,6);
   sig_hist__1->SetBinContent(58,4);
   sig_hist__1->SetBinContent(59,1);
   sig_hist__1->SetBinContent(60,1);
   sig_hist__1->SetBinContent(61,4);
   sig_hist__1->SetBinContent(62,5);
   sig_hist__1->SetEntries(1098034);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("sig_hist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1098034");
   ptstats_LaTex = ptstats->AddText("Mean  =  397.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  371.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   sig_hist__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(sig_hist__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   sig_hist__1->SetLineColor(ci);
   sig_hist__1->SetLineWidth(2);
   sig_hist__1->GetXaxis()->SetRange(1,61);
   sig_hist__1->GetXaxis()->SetLabelFont(42);
   sig_hist__1->GetXaxis()->SetLabelSize(0.035);
   sig_hist__1->GetXaxis()->SetTitleSize(0.035);
   sig_hist__1->GetXaxis()->SetTitleFont(42);
   sig_hist__1->GetYaxis()->SetLabelFont(42);
   sig_hist__1->GetYaxis()->SetLabelSize(0.035);
   sig_hist__1->GetYaxis()->SetTitleSize(0.035);
   sig_hist__1->GetYaxis()->SetTitleOffset(0);
   sig_hist__1->GetYaxis()->SetTitleFont(42);
   sig_hist__1->GetZaxis()->SetLabelFont(42);
   sig_hist__1->GetZaxis()->SetLabelSize(0.035);
   sig_hist__1->GetZaxis()->SetTitleSize(0.035);
   sig_hist__1->GetZaxis()->SetTitleFont(42);
   sig_hist__1->Draw("Ahist");
   
   TH1F *sqrtHist__2 = new TH1F("sqrtHist__2","sqrt(QCD)",61,-50,3050);
   sqrtHist__2->SetBinContent(1,2.5004);
   sqrtHist__2->SetBinContent(2,5676);
   sqrtHist__2->SetBinContent(3,8737.183);
   sqrtHist__2->SetBinContent(4,5854.698);
   sqrtHist__2->SetBinContent(5,3718.901);
   sqrtHist__2->SetBinContent(6,2343.252);
   sqrtHist__2->SetBinContent(7,1508.814);
   sqrtHist__2->SetBinContent(8,1094.78);
   sqrtHist__2->SetBinContent(9,973.0363);
   sqrtHist__2->SetBinContent(10,961.7007);
   sqrtHist__2->SetBinContent(11,968.2);
   sqrtHist__2->SetBinContent(12,967.7687);
   sqrtHist__2->SetBinContent(13,955.735);
   sqrtHist__2->SetBinContent(14,935.2149);
   sqrtHist__2->SetBinContent(15,908.3417);
   sqrtHist__2->SetBinContent(16,877.2747);
   sqrtHist__2->SetBinContent(17,843.0604);
   sqrtHist__2->SetBinContent(18,800.9782);
   sqrtHist__2->SetBinContent(19,753.5208);
   sqrtHist__2->SetBinContent(20,702.9181);
   sqrtHist__2->SetBinContent(21,645.4667);
   sqrtHist__2->SetBinContent(22,587.6825);
   sqrtHist__2->SetBinContent(23,531.1425);
   sqrtHist__2->SetBinContent(24,479.4789);
   sqrtHist__2->SetBinContent(25,431.0252);
   sqrtHist__2->SetBinContent(26,387.7364);
   sqrtHist__2->SetBinContent(27,347.3604);
   sqrtHist__2->SetBinContent(28,312.42);
   sqrtHist__2->SetBinContent(29,280.6627);
   sqrtHist__2->SetBinContent(30,253.0878);
   sqrtHist__2->SetBinContent(31,225.1085);
   sqrtHist__2->SetBinContent(32,203.0725);
   sqrtHist__2->SetBinContent(33,182.8983);
   sqrtHist__2->SetBinContent(34,165.5659);
   sqrtHist__2->SetBinContent(35,148.0999);
   sqrtHist__2->SetBinContent(36,134.7354);
   sqrtHist__2->SetBinContent(37,121.2141);
   sqrtHist__2->SetBinContent(38,109.8224);
   sqrtHist__2->SetBinContent(39,99.39505);
   sqrtHist__2->SetBinContent(40,88.40729);
   sqrtHist__2->SetBinContent(41,80.20113);
   sqrtHist__2->SetBinContent(42,71.79702);
   sqrtHist__2->SetBinContent(43,64.53726);
   sqrtHist__2->SetBinContent(44,58.07165);
   sqrtHist__2->SetBinContent(45,51.26817);
   sqrtHist__2->SetBinContent(46,47.12202);
   sqrtHist__2->SetBinContent(47,42.86253);
   sqrtHist__2->SetBinContent(48,37.68695);
   sqrtHist__2->SetBinContent(49,34.21969);
   sqrtHist__2->SetBinContent(50,31.7624);
   sqrtHist__2->SetBinContent(51,27.87156);
   sqrtHist__2->SetBinContent(52,25.27277);
   sqrtHist__2->SetBinContent(53,23.31407);
   sqrtHist__2->SetBinContent(54,20.04919);
   sqrtHist__2->SetBinContent(55,17.9663);
   sqrtHist__2->SetBinContent(56,17.4751);
   sqrtHist__2->SetBinContent(57,16.00569);
   sqrtHist__2->SetBinContent(58,13.76205);
   sqrtHist__2->SetBinContent(59,12.60952);
   sqrtHist__2->SetBinContent(60,11.14437);
   sqrtHist__2->SetBinContent(61,11.47131);
   sqrtHist__2->SetEntries(61);

   ci = TColor::GetColor("#000099");
   sqrtHist__2->SetLineColor(ci);
   sqrtHist__2->SetLineWidth(2);
   sqrtHist__2->GetXaxis()->SetLabelFont(42);
   sqrtHist__2->GetXaxis()->SetLabelSize(0.035);
   sqrtHist__2->GetXaxis()->SetTitleSize(0.035);
   sqrtHist__2->GetXaxis()->SetTitleFont(42);
   sqrtHist__2->GetYaxis()->SetLabelFont(42);
   sqrtHist__2->GetYaxis()->SetLabelSize(0.035);
   sqrtHist__2->GetYaxis()->SetTitleSize(0.035);
   sqrtHist__2->GetYaxis()->SetTitleOffset(0);
   sqrtHist__2->GetYaxis()->SetTitleFont(42);
   sqrtHist__2->GetZaxis()->SetLabelFont(42);
   sqrtHist__2->GetZaxis()->SetLabelSize(0.035);
   sqrtHist__2->GetZaxis()->SetTitleSize(0.035);
   sqrtHist__2->GetZaxis()->SetTitleFont(42);
   sqrtHist__2->Draw("AEsame");
   
   TLegend *leg = new TLegend(0.7,0.6,0.9,0.8,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("sig_hist","signal (2017 1000GeV)","lp");

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("bkg_hist_sum","background QCD (2017)","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TH1F *sig_hist__3 = new TH1F("sig_hist__3","Super Jet Mass (Jet Et cut 250 GeV)",61,-50,3050);
   sig_hist__3->SetBinContent(2,66779);
   sig_hist__3->SetBinContent(3,179145);
   sig_hist__3->SetBinContent(4,181159);
   sig_hist__3->SetBinContent(5,129112);
   sig_hist__3->SetBinContent(6,58299);
   sig_hist__3->SetBinContent(7,36620);
   sig_hist__3->SetBinContent(8,24230);
   sig_hist__3->SetBinContent(9,19781);
   sig_hist__3->SetBinContent(10,20003);
   sig_hist__3->SetBinContent(11,20816);
   sig_hist__3->SetBinContent(12,21189);
   sig_hist__3->SetBinContent(13,21928);
   sig_hist__3->SetBinContent(14,22350);
   sig_hist__3->SetBinContent(15,23445);
   sig_hist__3->SetBinContent(16,25769);
   sig_hist__3->SetBinContent(17,30050);
   sig_hist__3->SetBinContent(18,37841);
   sig_hist__3->SetBinContent(19,45184);
   sig_hist__3->SetBinContent(20,40990);
   sig_hist__3->SetBinContent(21,25383);
   sig_hist__3->SetBinContent(22,15009);
   sig_hist__3->SetBinContent(23,10798);
   sig_hist__3->SetBinContent(24,8344);
   sig_hist__3->SetBinContent(25,6682);
   sig_hist__3->SetBinContent(26,5466);
   sig_hist__3->SetBinContent(27,4412);
   sig_hist__3->SetBinContent(28,3590);
   sig_hist__3->SetBinContent(29,2865);
   sig_hist__3->SetBinContent(30,2293);
   sig_hist__3->SetBinContent(31,1801);
   sig_hist__3->SetBinContent(32,1374);
   sig_hist__3->SetBinContent(33,1130);
   sig_hist__3->SetBinContent(34,907);
   sig_hist__3->SetBinContent(35,734);
   sig_hist__3->SetBinContent(36,566);
   sig_hist__3->SetBinContent(37,435);
   sig_hist__3->SetBinContent(38,359);
   sig_hist__3->SetBinContent(39,253);
   sig_hist__3->SetBinContent(40,193);
   sig_hist__3->SetBinContent(41,151);
   sig_hist__3->SetBinContent(42,137);
   sig_hist__3->SetBinContent(43,95);
   sig_hist__3->SetBinContent(44,80);
   sig_hist__3->SetBinContent(45,51);
   sig_hist__3->SetBinContent(46,48);
   sig_hist__3->SetBinContent(47,40);
   sig_hist__3->SetBinContent(48,27);
   sig_hist__3->SetBinContent(49,26);
   sig_hist__3->SetBinContent(50,20);
   sig_hist__3->SetBinContent(51,21);
   sig_hist__3->SetBinContent(52,11);
   sig_hist__3->SetBinContent(53,8);
   sig_hist__3->SetBinContent(54,9);
   sig_hist__3->SetBinContent(55,1);
   sig_hist__3->SetBinContent(56,4);
   sig_hist__3->SetBinContent(57,6);
   sig_hist__3->SetBinContent(58,4);
   sig_hist__3->SetBinContent(59,1);
   sig_hist__3->SetBinContent(60,1);
   sig_hist__3->SetBinContent(61,4);
   sig_hist__3->SetBinContent(62,5);
   sig_hist__3->SetEntries(1098034);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("sig_hist");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1098034");
   ptstats_LaTex = ptstats->AddText("Mean  =  397.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  371.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   sig_hist__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(sig_hist__3);

   ci = TColor::GetColor("#000099");
   sig_hist__3->SetLineColor(ci);
   sig_hist__3->SetLineWidth(2);
   sig_hist__3->GetXaxis()->SetRange(1,61);
   sig_hist__3->GetXaxis()->SetLabelFont(42);
   sig_hist__3->GetXaxis()->SetLabelSize(0.035);
   sig_hist__3->GetXaxis()->SetTitleSize(0.035);
   sig_hist__3->GetXaxis()->SetTitleFont(42);
   sig_hist__3->GetYaxis()->SetLabelFont(42);
   sig_hist__3->GetYaxis()->SetLabelSize(0.035);
   sig_hist__3->GetYaxis()->SetTitleSize(0.035);
   sig_hist__3->GetYaxis()->SetTitleOffset(0);
   sig_hist__3->GetYaxis()->SetTitleFont(42);
   sig_hist__3->GetZaxis()->SetLabelFont(42);
   sig_hist__3->GetZaxis()->SetLabelSize(0.035);
   sig_hist__3->GetZaxis()->SetTitleSize(0.035);
   sig_hist__3->GetZaxis()->SetTitleFont(42);
   sig_hist__3->Draw("SAME");
   
   TH1F *bkg_hist_sum__4 = new TH1F("bkg_hist_sum__4","QCD SJ mass",61,-50,3050);
   bkg_hist_sum__4->SetBinContent(1,6.252);
   bkg_hist_sum__4->SetBinContent(2,3.221698e+07);
   bkg_hist_sum__4->SetBinContent(3,7.633837e+07);
   bkg_hist_sum__4->SetBinContent(4,3.427749e+07);
   bkg_hist_sum__4->SetBinContent(5,1.383023e+07);
   bkg_hist_sum__4->SetBinContent(6,5490832);
   bkg_hist_sum__4->SetBinContent(7,2276520);
   bkg_hist_sum__4->SetBinContent(8,1198544);
   bkg_hist_sum__4->SetBinContent(9,946799.6);
   bkg_hist_sum__4->SetBinContent(10,924868.4);
   bkg_hist_sum__4->SetBinContent(11,937411.1);
   bkg_hist_sum__4->SetBinContent(12,936576.2);
   bkg_hist_sum__4->SetBinContent(13,913429.4);
   bkg_hist_sum__4->SetBinContent(14,874626.9);
   bkg_hist_sum__4->SetBinContent(15,825084.6);
   bkg_hist_sum__4->SetBinContent(16,769610.8);
   bkg_hist_sum__4->SetBinContent(17,710750.9);
   bkg_hist_sum__4->SetBinContent(18,641566.1);
   bkg_hist_sum__4->SetBinContent(19,567793.5);
   bkg_hist_sum__4->SetBinContent(20,494093.8);
   bkg_hist_sum__4->SetBinContent(21,416627.2);
   bkg_hist_sum__4->SetBinContent(22,345370.7);
   bkg_hist_sum__4->SetBinContent(23,282112.4);
   bkg_hist_sum__4->SetBinContent(24,229900);
   bkg_hist_sum__4->SetBinContent(25,185782.8);
   bkg_hist_sum__4->SetBinContent(26,150339.5);
   bkg_hist_sum__4->SetBinContent(27,120659.2);
   bkg_hist_sum__4->SetBinContent(28,97606.28);
   bkg_hist_sum__4->SetBinContent(29,78771.53);
   bkg_hist_sum__4->SetBinContent(30,64053.45);
   bkg_hist_sum__4->SetBinContent(31,50673.82);
   bkg_hist_sum__4->SetBinContent(32,41238.45);
   bkg_hist_sum__4->SetBinContent(33,33451.79);
   bkg_hist_sum__4->SetBinContent(34,27412.08);
   bkg_hist_sum__4->SetBinContent(35,21933.58);
   bkg_hist_sum__4->SetBinContent(36,18153.62);
   bkg_hist_sum__4->SetBinContent(37,14692.87);
   bkg_hist_sum__4->SetBinContent(38,12060.96);
   bkg_hist_sum__4->SetBinContent(39,9879.376);
   bkg_hist_sum__4->SetBinContent(40,7815.848);
   bkg_hist_sum__4->SetBinContent(41,6432.221);
   bkg_hist_sum__4->SetBinContent(42,5154.812);
   bkg_hist_sum__4->SetBinContent(43,4165.058);
   bkg_hist_sum__4->SetBinContent(44,3372.317);
   bkg_hist_sum__4->SetBinContent(45,2628.425);
   bkg_hist_sum__4->SetBinContent(46,2220.485);
   bkg_hist_sum__4->SetBinContent(47,1837.196);
   bkg_hist_sum__4->SetBinContent(48,1420.306);
   bkg_hist_sum__4->SetBinContent(49,1170.987);
   bkg_hist_sum__4->SetBinContent(50,1008.85);
   bkg_hist_sum__4->SetBinContent(51,776.824);
   bkg_hist_sum__4->SetBinContent(52,638.713);
   bkg_hist_sum__4->SetBinContent(53,543.546);
   bkg_hist_sum__4->SetBinContent(54,401.97);
   bkg_hist_sum__4->SetBinContent(55,322.788);
   bkg_hist_sum__4->SetBinContent(56,305.379);
   bkg_hist_sum__4->SetBinContent(57,256.182);
   bkg_hist_sum__4->SetBinContent(58,189.394);
   bkg_hist_sum__4->SetBinContent(59,159);
   bkg_hist_sum__4->SetBinContent(60,124.197);
   bkg_hist_sum__4->SetBinContent(61,131.591);
   bkg_hist_sum__4->SetBinContent(62,584.788);
   bkg_hist_sum__4->SetBinError(1,4.420832);
   bkg_hist_sum__4->SetBinError(2,10028.13);
   bkg_hist_sum__4->SetBinError(3,15296.23);
   bkg_hist_sum__4->SetBinError(4,10133.55);
   bkg_hist_sum__4->SetBinError(5,6373.27);
   bkg_hist_sum__4->SetBinError(6,3949.532);
   bkg_hist_sum__4->SetBinError(7,2485.761);
   bkg_hist_sum__4->SetBinError(8,1790.967);
   bkg_hist_sum__4->SetBinError(9,1630.635);
   bkg_hist_sum__4->SetBinError(10,1640.588);
   bkg_hist_sum__4->SetBinError(11,1662.629);
   bkg_hist_sum__4->SetBinError(12,1663.633);
   bkg_hist_sum__4->SetBinError(13,1642.225);
   bkg_hist_sum__4->SetBinError(14,1605.792);
   bkg_hist_sum__4->SetBinError(15,1557.97);
   bkg_hist_sum__4->SetBinError(16,1502.433);
   bkg_hist_sum__4->SetBinError(17,1440.965);
   bkg_hist_sum__4->SetBinError(18,1364.495);
   bkg_hist_sum__4->SetBinError(19,1277.825);
   bkg_hist_sum__4->SetBinError(20,1184.184);
   bkg_hist_sum__4->SetBinError(21,1078.052);
   bkg_hist_sum__4->SetBinError(22,971.3225);
   bkg_hist_sum__4->SetBinError(23,867.9291);
   bkg_hist_sum__4->SetBinError(24,774.1174);
   bkg_hist_sum__4->SetBinError(25,687.9133);
   bkg_hist_sum__4->SetBinError(26,611.091);
   bkg_hist_sum__4->SetBinError(27,540.9967);
   bkg_hist_sum__4->SetBinError(28,480.9382);
   bkg_hist_sum__4->SetBinError(29,427.1563);
   bkg_hist_sum__4->SetBinError(30,381.2172);
   bkg_hist_sum__4->SetBinError(31,334.9912);
   bkg_hist_sum__4->SetBinError(32,299.9914);
   bkg_hist_sum__4->SetBinError(33,268.3103);
   bkg_hist_sum__4->SetBinError(34,240.7326);
   bkg_hist_sum__4->SetBinError(35,212.0139);
   bkg_hist_sum__4->SetBinError(36,193.1363);
   bkg_hist_sum__4->SetBinError(37,172.0266);
   bkg_hist_sum__4->SetBinError(38,154.1535);
   bkg_hist_sum__4->SetBinError(39,138.5031);
   bkg_hist_sum__4->SetBinError(40,121.8175);
   bkg_hist_sum__4->SetBinError(41,108.2091);
   bkg_hist_sum__4->SetBinError(42,96.69415);
   bkg_hist_sum__4->SetBinError(43,85.29637);
   bkg_hist_sum__4->SetBinError(44,75.56278);
   bkg_hist_sum__4->SetBinError(45,64.10689);
   bkg_hist_sum__4->SetBinError(46,59.67643);
   bkg_hist_sum__4->SetBinError(47,54.0195);
   bkg_hist_sum__4->SetBinError(48,45.91992);
   bkg_hist_sum__4->SetBinError(49,40.86169);
   bkg_hist_sum__4->SetBinError(50,36.87873);
   bkg_hist_sum__4->SetBinError(51,31.9731);
   bkg_hist_sum__4->SetBinError(52,29.02419);
   bkg_hist_sum__4->SetBinError(53,25.88387);
   bkg_hist_sum__4->SetBinError(54,21.73035);
   bkg_hist_sum__4->SetBinError(55,18.73188);
   bkg_hist_sum__4->SetBinError(56,18.82938);
   bkg_hist_sum__4->SetBinError(57,17.27208);
   bkg_hist_sum__4->SetBinError(58,14.2633);
   bkg_hist_sum__4->SetBinError(59,12.60952);
   bkg_hist_sum__4->SetBinError(60,11.45517);
   bkg_hist_sum__4->SetBinError(61,12.35566);
   bkg_hist_sum__4->SetBinError(62,24.75648);
   bkg_hist_sum__4->SetEntries(6.386525e+07);

   ci = TColor::GetColor("#ff0000");
   bkg_hist_sum__4->SetLineColor(ci);
   bkg_hist_sum__4->SetLineWidth(2);
   bkg_hist_sum__4->GetXaxis()->SetLabelFont(42);
   bkg_hist_sum__4->GetXaxis()->SetLabelSize(0.035);
   bkg_hist_sum__4->GetXaxis()->SetTitleSize(0.035);
   bkg_hist_sum__4->GetXaxis()->SetTitleFont(42);
   bkg_hist_sum__4->GetYaxis()->SetLabelFont(42);
   bkg_hist_sum__4->GetYaxis()->SetLabelSize(0.035);
   bkg_hist_sum__4->GetYaxis()->SetTitleSize(0.035);
   bkg_hist_sum__4->GetYaxis()->SetTitleOffset(0);
   bkg_hist_sum__4->GetYaxis()->SetTitleFont(42);
   bkg_hist_sum__4->GetZaxis()->SetLabelFont(42);
   bkg_hist_sum__4->GetZaxis()->SetLabelSize(0.035);
   bkg_hist_sum__4->GetZaxis()->SetTitleSize(0.035);
   bkg_hist_sum__4->GetZaxis()->SetTitleFont(42);
   bkg_hist_sum__4->Draw("SAME A");
   
   TPaveText *pt = new TPaveText(0.2813418,0.9330354,0.7186582,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Super Jet Mass (Jet Et cut 250 GeV)");
   pt->Draw();
   upper_pad->Modified();
   c1_n2->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad = new TPad("lower_pad", "Signal / sqrt(QCD)",0.0025,0.0025,0.9975,0.3);
   lower_pad->Draw();
   lower_pad->cd();
   lower_pad->Range(-437.5,-31.58332,3437.5,73.6944);
   lower_pad->SetFillColor(0);
   lower_pad->SetBorderMode(0);
   lower_pad->SetBorderSize(2);
   lower_pad->SetTopMargin(0.05);
   lower_pad->SetBottomMargin(0.3);
   lower_pad->SetFrameBorderMode(0);
   lower_pad->SetFrameBorderMode(0);
   
   Double_t _fx3001[61] = {
   -24.59016,
   26.22951,
   77.04918,
   127.8689,
   178.6885,
   229.5082,
   280.3279,
   331.1475,
   381.9672,
   432.7869,
   483.6066,
   534.4262,
   585.2459,
   636.0656,
   686.8852,
   737.7049,
   788.5246,
   839.3443,
   890.1639,
   940.9836,
   991.8033,
   1042.623,
   1093.443,
   1144.262,
   1195.082,
   1245.902,
   1296.721,
   1347.541,
   1398.361,
   1449.18,
   1500,
   1550.82,
   1601.639,
   1652.459,
   1703.279,
   1754.098,
   1804.918,
   1855.738,
   1906.557,
   1957.377,
   2008.197,
   2059.016,
   2109.836,
   2160.656,
   2211.475,
   2262.295,
   2313.115,
   2363.934,
   2414.754,
   2465.574,
   2516.393,
   2567.213,
   2618.033,
   2668.852,
   2719.672,
   2770.492,
   2821.311,
   2872.131,
   2922.951,
   2973.77,
   3024.59};
   Double_t _fy3001[61] = {
   0,
   11.76515,
   20.50418,
   30.94091,
   34.71686,
   24.8822,
   24.26773,
   22.12785,
   20.32991,
   20.79314,
   21.50413,
   21.88946,
   22.93724,
   23.90374,
   25.82048,
   29.38312,
   35.6465,
   47.2422,
   59.92573,
   58.30725,
   39.35349,
   25.52551,
   20.33522,
   17.41962,
   15.50348,
   14.08763,
   12.7147,
   11.50641,
   10.19573,
   9.063241,
   8.004444,
   6.768473,
   6.174863,
   5.463855,
   4.959459,
   4.192593,
   3.595041,
   3.263636,
   2.555556,
   2.193182,
   1.8875,
   1.902778,
   1.461538,
   1.37931,
   1,
   1.021277,
   0.9302326,
   0.7105263,
   0.7647059,
   0.625,
   0.75,
   0.44,
   0.3478261,
   0.45,
   0.05555556,
   0.2352941,
   0.375,
   0.2857143,
   0.07692308,
   0.09090909,
   0.3636364};
   Double_t _felx3001[61] = {
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984};
   Double_t _fely3001[61] = {
   0,
   0.1626447,
   0.2246304,
   0.4107973,
   0.5773199,
   0.524127,
   0.6371822,
   0.6832345,
   0.6671338,
   0.6858612,
   0.706578,
   0.7189577,
   0.7573222,
   0.7973608,
   0.8726881,
   1.008187,
   1.243866,
   1.685417,
   2.198591,
   2.215816,
   1.567518,
   1.071885,
   0.9028015,
   0.8173373,
   0.7693217,
   0.7389006,
   0.7075691,
   0.6777296,
   0.6358889,
   0.5988803,
   0.5643594,
   0.5073221,
   0.4903027,
   0.4594676,
   0.4449386,
   0.399662,
   0.3675258,
   0.3535864,
   0.3009726,
   0.2800164,
   0.2588727,
   0.2744604,
   0.2328516,
   0.2351346,
   0.1953293,
   0.2064945,
   0.2010226,
   0.1753657,
   0.1950012,
   0.1739339,
   0.2109662,
   0.1538324,
   0.1370088,
   0.1731833,
   0.04642179,
   0.1221293,
   0.1696902,
   0.1505046,
   0.06450707,
   0.07640882,
   0.1956853};
   Double_t _fehx3001[61] = {
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984,
   25.40984};
   Double_t _fehy3001[61] = {
   0.8472054,
   0.164938,
   0.2271309,
   0.4163593,
   0.5871598,
   0.5355154,
   0.654573,
   0.7053131,
   0.6901093,
   0.7096106,
   0.7309469,
   0.743744,
   0.7835764,
   0.8253034,
   0.9036984,
   1.04459,
   1.28959,
   1.748851,
   2.283832,
   2.304978,
   1.633794,
   1.119796,
   0.9456022,
   0.8584316,
   0.8103832,
   0.7807508,
   0.7502782,
   0.7212203,
   0.6792967,
   0.6424049,
   0.6083764,
   0.5496086,
   0.5338438,
   0.5029216,
   0.4901484,
   0.4430602,
   0.4106399,
   0.3978448,
   0.3422409,
   0.3220354,
   0.3009435,
   0.3218305,
   0.277689,
   0.2841671,
   0.2427444,
   0.2588888,
   0.2561988,
   0.231479,
   0.2604597,
   0.2385326,
   0.2916167,
   0.2298131,
   0.2156774,
   0.2718237,
   0.139855,
   0.2259683,
   0.2914112,
   0.2850502,
   0.2003941,
   0.2421628,
   0.3840401};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(61,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-50,3050);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(68.43052);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3001->SetLineColor(ci);
   Graph_Graph3001->GetXaxis()->SetRange(1,100);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-50,0.7,3050,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-50,1,3050,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-50,1.3,3050,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad->Modified();
   c1_n2->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad->Draw();
   top_pad->cd();
   top_pad->Range(0,0,1,1);
   top_pad->SetFillColor(0);
   top_pad->SetFillStyle(4000);
   top_pad->SetBorderMode(0);
   top_pad->SetBorderSize(2);
   top_pad->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-50,3050,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,190217,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-50,3050,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,68.43052,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad->Modified();
   c1_n2->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   c1_n2->Modified();
   c1_n2->cd();
   c1_n2->SetSelected(c1_n2);
}
