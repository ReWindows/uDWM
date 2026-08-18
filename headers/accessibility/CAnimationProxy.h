#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CAnimationProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BaseAddBinding@CAnimationProxy@@QEAAJPEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z
    long BaseAddBinding(CResourceProxy *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimationProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrigger@CAnimationProxy@@QEAAJPEAVCAnimationTriggerProxy@@@Z
    long SetTrigger(CAnimationTriggerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBeginTime@CAnimationProxy@@QEAAJ_K0@Z
    long UpdateBeginTime(uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePrimitives@CAnimationProxy@@QEAAJPEBUDwmAnimationPrimitive@@I@Z
    long UpdatePrimitives(DwmAnimationPrimitive const *, unsigned int);
};
