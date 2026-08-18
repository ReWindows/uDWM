#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CTransformGroupProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTransformGroupProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z
    long Update(CBaseTransformProxy * *, unsigned int);
};
