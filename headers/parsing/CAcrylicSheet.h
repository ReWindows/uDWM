#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 31 member(s).
class CAcrylicSheet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z
    long AdjustTargetRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z
    long AnimateRect(tagRECT const &, float, unsigned long, InterpolationParameters, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z
    long AnimateRect(CWindowData *, float, unsigned long, InterpolationParameters, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKM@Z
    long AnimateRect(tagRECT const &, float, unsigned long, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z
    long AnimateRect(CWindowData *, float, unsigned long, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z
    static long Create(CWindowData *, bool, CAcrylicSheet * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CAcrylicSheet@@QEAAXXZ
    void Hide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationActive@CAcrylicSheet@@QEAA_NXZ
    bool IsAnimationActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ
    long OnTransparencyPolicyUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ
    long RegisterGlobalTimer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpi@CAcrylicSheet@@QEAAJH@Z
    long SetDpi(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z
    long SetIsLightTheme(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAlphaAnimation@CAcrylicSheet@@QEAAJMMM@Z
    long StartAlphaAnimation(float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRectAnimation@CAcrylicSheet@@QEAAJPEBUtagRECT@@0MUInterpolationParameters@@M@Z
    long StartRectAnimation(tagRECT const *, tagRECT const *, float, InterpolationParameters, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimations@CAcrylicSheet@@QEAAJXZ
    long StopAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ
    long UnRegisterGlobalTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z
    long UpdateRect(tagRECT const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CAcrylicSheet@@MEAAJXZ
    virtual long OnGlobalTimeUpdated();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAcrylicSheet@@AEAA@AEBUtagRECT@@H_N@Z
    CAcrylicSheet(tagRECT const &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClampValue@CAcrylicSheet@@AEAAJJJJ@Z
    long ClampValue(long, long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAcrylicAccentColor@CAcrylicSheet@@AEAAJXZ
    long EnsureAcrylicAccentColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ
    long EnsureBackgroundEffects();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z
    static tagRECT GetMarginAdjustedWindowRect(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAcrylicSheet@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaUpdated@CAcrylicSheet@@AEAAXM@Z
    void OnAlphaUpdated(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRectInternal@CAcrylicSheet@@AEAAJAEBUtagRECT@@@Z
    long UpdateRectInternal(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CAcrylicSheet@@AEAAJXZ
    long UpdateTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CAcrylicSheet@@EEAAJXZ
    virtual long ValidateVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAcrylicSheet@@EEAA@XZ
    virtual ~CAcrylicSheet();
};
