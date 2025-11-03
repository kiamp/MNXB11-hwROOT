#pragma once
#include<TObject.h>
#include <cmath>
#include<TTree.h>
#include<TFile.h>
#include<iostream>
#include<TH2.h>
#include<TCanvas.h>
#include<TRandom.h>
#include<TAttMarker.h>

class Bestclass : public TObject {
    public:
        Bestclass();
        Bestclass(double px_, double py_, double pz_);
        virtual ~Bestclass();

        void magnitude(double pxm, double pym, double pzm);

        double px, py, pz;

    
    private:
        double magn; //magnitude variable
    
    ClassDef(Bestclass, 1);

};