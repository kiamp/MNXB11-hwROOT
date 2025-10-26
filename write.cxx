#include "bestclass.h"
void write(){
    std::unique_ptr<TFile> file_ptr( TFile::Open("tree_file.root") );
    std::unique_ptr<TTree> tree_ptr(file_ptr->Get<TTree>("tree"));

    Int_t variable;
    tree_ptr->SetBranchAddress("bestBranch", &variable);

    TH2D* hist = new TH2D("hist","pxPyHist", 50, 3, 3, 50, 3, 3);

    Int_t nEvents;
    nEvents = 2000;

    Double_t px = 0.0, py = 0.0;

    for (Int_t i{0}; i<nEvents; i++){
        tree_ptr->GetEntry(i);
        hist->Fill(px,py);
    }

    hist->Draw();

    TCanvas* canvas = new TCanvas("canvas", "px*py and pz");
    tree_ptr->Draw("px*py:pz", "magn<1");
    delete hist;
    delete canvas;
}