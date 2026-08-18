#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CThumbnailTransition {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CThumbnailTransition@@QEAA@XZ
    CThumbnailTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z
    virtual long OnAnimationComplete(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z
    long StartAnimation(CThumbnailAnimatedVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@CThumbnailTransition@@QEAAXXZ
    void StopAnimation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CThumbnailTransition@@UEAA@XZ
    virtual ~CThumbnailTransition();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupAnimation@CThumbnailTransition@@AEAAXXZ
    void _CleanupAnimation();
};
