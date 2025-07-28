# Test_draw
```
This is a test for the usage of TTree::Draw.  
  root -l create_tree.C  
  root -l Draw.C  

I find that when   
  TTree tree with a TBranch Float_t Bmass[N]  
  TH1F *t1 = new TH1F("t1","t1",100,0,5);  
  tree->Draw("Bmass >> t1","Bmass>1");  
TTree::Draw will output all the Bmass in one leaf
```
