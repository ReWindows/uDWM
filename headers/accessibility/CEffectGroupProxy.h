#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CEffectGroupProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEffectGroupProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z
    long Update(double, unsigned int, CTransform3dGroupProxy const *);
};
