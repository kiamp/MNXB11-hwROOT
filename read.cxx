#include "bestclass.h"
void read(){

    Bestclass *bestobject{nullptr};

    TFile *file = new TFile("tree_file.root");
    TTree *tree = file->Get<TTree>("tree");

    tree->SetBranchAddress("bestobject", &bestobject);

    int nEvents = tree->GetEntries();

    double px = 0, py = 0, pz = 0;

    TH2D *hist = new TH2D("hist","pxPyHist;px;py", 50, -4, 4, 50, -4, 4);

    for (int i{0}; i < nEvents; i++){
        tree->GetEntry(i);
        hist->Fill(bestobject->px,bestobject->py);
    }

    TCanvas *canvas1 = new TCanvas("canvas1", "px vs py", 800, 600);
    hist->Draw();
    canvas1->SaveAs("px_vs_py.png");

    TCanvas* canvas2 = new TCanvas("canvas1", "px*py and pz", 800, 600);
    tree->Draw("px*py:pz", "sqrt(px*px+py*py+pz*pz) <2");
    canvas2->SaveAs("pxpy_vs_pz.png");
    
    delete file;
    delete canvas1;
    delete canvas2;
}