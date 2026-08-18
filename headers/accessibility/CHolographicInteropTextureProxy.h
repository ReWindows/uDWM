#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CHolographicInteropTextureProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CHolographicInteropTextureProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CHolographicInteropTextureProxy@@QEAAJPEAVCVisualProxy@@@Z
    long SetRoot(CVisualProxy *);
};
