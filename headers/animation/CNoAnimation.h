#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CNoAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CNoAnimation@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CNoAnimation@@UEAAJXZ
    virtual long OnEndTransitionRequest();
};
