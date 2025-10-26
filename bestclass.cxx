#include "bestclass.h"

bestclass::bestclass() : px(0), py(0), pz(0) {}

bestclass::bestclass(Double_t px_, Double_t py_, Double_t pz_) : px(px_), py(py_), pz(pz_) {magnitude(px_, py_, pz_);}

bestclass:: ~bestclass(){}
    //add something?

void bestclass::magnitude(Double_t pxm, Double_t pym, Double_t pzm) {
    magn = sqrt(pxm*pxm+pym*pym+pzm*pzm);
}

ClassImp(bestclass)
