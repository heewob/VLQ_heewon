import ROOT as rt
import math

# Define the number of points
Npoint = (3000 - 0) // 50 + 1
masses = [0 + j * 50 for j in range(Npoint)]

# Open the ROOT files
signal_file = rt.TFile.Open("/eos/uscms/store/user/chungh/combinedROOT/TprimeTprime1800_2017_nom_combined.root")
bkg_file1 = rt.TFile.Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC1000to1500_2017_nom_combined.root")
bkg_file2 = rt.TFile.Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC1500to2000_2017_nom_combined.root")
bkg_file3 = rt.TFile.Open("/eos/uscms/store/user/chungh/combinedROOT/QCDMC2000toInf_2017_nom_combined.root")

# Access trees within the files
signal_tree = signal_file.Get("selcetionStudy_Et100/tree_nom_Et100.000000")
bkg_tree1 = bkg_file1.Get("selcetionStudy_Et100/tree_nom_Et100.000000")
bkg_tree2 = bkg_file2.Get("selcetionStudy_Et100/tree_nom_Et100.000000")
bkg_tree3 = bkg_file3.Get("selcetionStudy_Et100/tree_nom_Et100.000000")

# Check if files and trees are successfully opened
if not signal_file or not bkg_file1 or not bkg_file2 or not bkg_file3:
    print("Error: Could not open ROOT files.")
    exit(0)
if not signal_tree or not bkg_tree1 or not bkg_tree2 or not bkg_tree3:
    print("Error: Trees are null.")
    exit(0)

# Create the signal histogram
signal_tree.Draw("superJet_mass>>sig_hist(61,-50,3050)")
sig_hist = rt.gPad.GetPrimitive("sig_hist").Clone("cloned_sig_hist")
if not sig_hist:
    print("Error: sig_hist is nullptr, exiting...")
    exit(1)
sig_hist.Scale(0.00001064)

# Create and sum the background histograms
bkg_hist_sum = rt.TH1F("bkg_hist_sum", "Super Jet Mass (Jet Et cut 100 GeV)", Npoint, -50, 3050)

bkg_tree1.Draw("superJet_mass>>bkg_hist_1(61,-50,3050)")
bkg_hist_1 = rt.gPad.GetPrimitive("bkg_hist_1").Clone("cloned_bkg_hist_1")
bkg_tree2.Draw("superJet_mass>>bkg_hist_2(61,-50,3050)")
bkg_hist_2 = rt.gPad.GetPrimitive("bkg_hist_2").Clone("cloned_bkg_hist_2")
bkg_tree3.Draw("superJet_mass>>bkg_hist_3(61,-50,3050)")
bkg_hist_3 = rt.gPad.GetPrimitive("bkg_hist_3").Clone("cloned_bkg_hist_3")

# Apply scale factors and add to the total background histogram
bkg_hist_1.Scale(3.126)
bkg_hist_sum.Add(bkg_hist_1)
bkg_hist_2.Scale(0.3197)
bkg_hist_sum.Add(bkg_hist_2)
bkg_hist_3.Scale(0.14)
bkg_hist_sum.Add(bkg_hist_3)

# Clone the signal histogram and apply sqrt to each bin's content
sqrtHist = sig_hist.Clone("sqrtHist")
sqrtHist.SetTitle("sqrt(QCD)")
sqrtHist.Reset()

for i in range(1, bkg_hist_sum.GetNbinsX() + 1):
    bkg_content = bkg_hist_sum.GetBinContent(i)
    sqrtHist.SetBinContent(i, math.sqrt(bkg_content))

# Plotting
canvas = rt.TCanvas("canvas", "Signal vs Background", 800, 600)
rp = rt.TRatioPlot(sig_hist, sqrtHist)
canvas.cd()
rp.Draw()
canvas.Update()
#rp.GetLowerPad().SetTitle("signal/sqrt(QCD)")
rp.GetUpperPad().cd()
legend = rt.TLegend(0.7, 0.6, 0.9, 0.8)
legend.AddEntry(sig_hist, "signal (2017 1800GeV)", "lp")
legend.AddEntry(bkg_hist_sum, "background QCD (2017)", "lp")
legend.Draw()
rp.GetUpperPad().SetLogy()
bkg_hist_sum.SetLineColor(rt.kRed)
bkg_hist_sum.SetLineWidth(2)
sig_hist.SetLineWidth(2)
#sqrtHist.Draw("HIST SAME")
bkg_hist_sum.Draw("HIST SAME")
sig_hist.Draw("HIST SAME")
canvas.Update()

# Save the canvas
canvas.SaveAs("SJ_efficiency_2017_1800GeV_sigvsQCD_jet100.png")

# Close the files
signal_file.Close()
bkg_file1.Close()
bkg_file2.Close()
bkg_file3.Close()
