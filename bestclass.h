#pragma once
#include<TObject.h>
#include <cmath>
#include<TTree.h>
#include<TFile.h>
#include<iostream>
#include<TH2.h>
#include<TCanvas.h>
#include<TRandom.h>

class bestclass : public TObject {
    public:
        bestclass();
        bestclass(Double_t px_, Double_t py_, Double_t pz_);
        virtual ~bestclass();

        void magnitude(Double_t pxm, Double_t pym, Double_t pzm);
    
    private:
        Double_t px, py, pz;
        Double_t magn; //magnitude variable
        ClassDef(bestclass, 1);

};