#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CAppLaunchSwitch {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CAppLaunchSwitch@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginTransitionRequest@CAppLaunchSwitch@@UEAAJXZ
    virtual long OnBeginTransitionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndTransitionRequest@CAppLaunchSwitch@@UEAAJXZ
    virtual long OnEndTransitionRequest();
};
