#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CAnimationTriggerProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationTriggerProxy@@QEAA@XZ
    CAnimationTriggerProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CAnimationTriggerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trigger@CAnimationTriggerProxy@@QEAAJ_K@Z
    long Trigger(uint64_t);
};
