#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CScaleTransformProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CScaleTransformProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CScaleTransformProxy@@QEAAJNNNN@Z
    long Update(double, double, double, double);
};
