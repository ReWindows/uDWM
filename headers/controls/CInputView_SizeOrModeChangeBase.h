#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CInputView_SizeOrModeChangeBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputView_SizeOrModeChangeBase@@QEAA@XZ
    CInputView_SizeOrModeChangeBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z
    long StartThemeAnimation(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
