#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CTabletModeTransition {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CTabletModeTransition@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CTabletModeTransition@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequest@CTabletModeTransition@@UEAAJXZ
    virtual long OnBeginTransitionRequest();
};
