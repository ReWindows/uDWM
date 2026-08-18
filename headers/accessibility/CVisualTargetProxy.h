#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CVisualTargetProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CVisualTargetProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CVisualTargetProxy@@QEAAJPEAVCVisualProxy@@@Z
    long SetRoot(CVisualProxy *);
};
