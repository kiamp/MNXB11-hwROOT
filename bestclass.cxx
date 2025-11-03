#include "bestclass.h"

Bestclass::Bestclass() : px(0), py(0), pz(0), magn(0) {}

Bestclass::Bestclass(double px_, double py_, double pz_) : px(px_), py(py_), pz(pz_) {magnitude(px_, py_, pz_);}

Bestclass:: ~Bestclass(){}

void Bestclass::magnitude(double pxm, double pym, double pzm) {
    magn = std::sqrt(pxm*pxm+pym*pym+pzm*pzm);
}

ClassImp(Bestclass)
