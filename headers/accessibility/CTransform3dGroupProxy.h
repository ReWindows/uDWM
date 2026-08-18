#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CTransform3dGroupProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTransform3dGroupProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z
    long Update(CMatrixTransform3dProxy * *, unsigned int);
};
