void create_tree() {
    // Create file and TTree
    TFile *f = new TFile("test_Bmass.root", "RECREATE");
    TTree *tree = new TTree("tree", "test tree");

    // Define array branch
    const int N = 5;
    float Bmass[N];
    tree->Branch("Bmass", Bmass, Form("Bmass[%d]/F", N));

    // Fill events
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < N; ++j) {
            Bmass[j] = j; // Fill with index value (patterned)
        }
        tree->Fill();
    }

    // Save tree
    tree->Write();
    f->Close();
}
