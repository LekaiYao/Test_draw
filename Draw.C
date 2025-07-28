void Draw() {
    // Reopen the file and draw
    TFile *fin = new TFile("test_Bmass.root");
    TTree *tt = (TTree*)fin->Get("tree");

    // By default, only the distribution of Bmass[0] will be plotted
    TCanvas *c1 = new TCanvas("c1", "Default Bmass Draw", 800, 600);
    TH1F *t1 = new TH1F("t1","t1",100,0,5);
    tt->Draw("Bmass >> t1","Bmass>1");
    c1->cd();
    t1->Draw();
    c1->SaveAs("Draw_cut1.pdf");
}
