#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CRenderDataProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRenderDataProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z
    long Update(IRenderDataBuilder *);
};
