#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CFlyoutPopup {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CFlyoutPopup@@UEAA_NXZ
    virtual bool IsIndependent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlyoutPopup@@IEAA@XZ
    CFlyoutPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPopupOffsetForTarget@CFlyoutPopup@@MEAA_NW4DWMTRANSITION_TARGET@@PEAH1@Z
    virtual bool GetPopupOffsetForTarget(int, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowAnimation@CFlyoutPopup@@MEBA_NPEAVCWindowData@@@Z
    virtual bool ShouldShowAnimation(CWindowData *) const;
};
