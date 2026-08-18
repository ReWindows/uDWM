#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CRedirectVisualProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRedirectVisualProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRedirectedVisual@CRedirectVisualProxy@@QEAAJPEAVCVisualProxy@@@Z
    long SetRedirectedVisual(CVisualProxy *);
};
