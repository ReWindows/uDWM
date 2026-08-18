#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CSlideOutCharm {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CSlideOutCharm@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CSlideOutCharm@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CSlideOutCharm@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CSlideOutCharm@@UEAAJXZ
    virtual long OnEndTransitionRequest();
};
