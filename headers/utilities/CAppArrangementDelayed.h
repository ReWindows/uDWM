#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CAppArrangementDelayed {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGroupingTarget@CAppArrangementDelayed@@UEAA?AW4DWMTRANSITION_TARGET@@W42@@Z
    virtual int GetGroupingTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CAppArrangementDelayed@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CAppArrangementDelayed@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CAppArrangementDelayed@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z
    virtual long OnTransitionWindow(CWindowData *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CAppArrangementDelayed@@EEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeout@CAppArrangementDelayed@@EEAAKXZ
    virtual unsigned long GetTimeout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ
    virtual long OnAnimationStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z
    void _AdjustSourceOffsetsForOffscreenContent(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
