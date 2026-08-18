#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CColorTransformResourceProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CColorTransformResourceProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z
    long Update(MilColorTransform const &);
};
