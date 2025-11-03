#include "bestclass.h"
void write(){
    Bestclass *bestobject{nullptr};

    TFile *file = new TFile("tree_file.root", "recreate");
    TTree *tree = new TTree("tree","Tree with bestclass objects" );

    tree->Branch("bestobject", &bestobject);

    int nEvents {1000};

    double px, py, pz;

    for (int i{0}; i<nEvents; i++){
        px = gRandom->Gaus(0,0.5);
        py = gRandom->Gaus(1,0.5);
        pz = gRandom->Gaus(0.5,0.2);

        bestobject = new Bestclass(px, py, pz);

        tree->Fill();
        delete bestobject;
    }

    file->Write();
    file->Close();
}