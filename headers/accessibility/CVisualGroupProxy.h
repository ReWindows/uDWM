#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CVisualGroupProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualGroupProxy@@QEAA@XZ
    CVisualGroupProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CVisualGroupProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CVisualGroupProxy@@QEAAJPEAPEAVCVisualProxy@@I@Z
    long Update(CVisualProxy * *, unsigned int);
};
