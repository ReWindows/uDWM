#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CGaussianBlurEffectProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CGaussianBlurEffectProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CGaussianBlurEffectProxy@@QEAAJMII@Z
    long Update(float, unsigned int, unsigned int);
};
