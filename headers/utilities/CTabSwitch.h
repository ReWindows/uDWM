#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CTabSwitch {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPVLTarget@CTabSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z
    virtual int GetPVLTarget(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpecialTargetInfo@CTabSwitch@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z
    virtual int GetSpecialTargetInfo(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStoryboardInfo@CTabSwitch@@UEAAPEBUStoryboardInfo@@XZ
    virtual StoryboardInfo const * GetStoryboardInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@CTabSwitch@@UEAA_NXZ
    virtual bool IsEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CTabSwitch@@UEAA_NXZ
    virtual bool IsIndependent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z
    virtual void SetCompSyncHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseCommitHandle@CTabSwitch@@UEAA_NXZ
    virtual bool UseCommitHandle();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
