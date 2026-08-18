#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 15 member(s).
class CCaptureBorderVisual {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCaptureBorderVisual@@QEAA@XZ
    CCaptureBorderVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCaptureBorderVisual@@SAJPEAPEAV1@@Z
    static long Create(CCaptureBorderVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpiScale@CCaptureBorderVisual@@QEAAXM@Z
    void SetDpiScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CCaptureBorderVisual@@QEAAX_N@Z
    void Show(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@CCaptureBorderVisual@@QEAAXAEBUtagRECT@@@Z
    void UpdateRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRectFromWindow@CCaptureBorderVisual@@QEAAXPEAVCWindowData@@@Z
    void UpdateRectFromWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyle@CCaptureBorderVisual@@QEAAXXZ
    void UpdateStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CCaptureBorderVisual@@UEAAJXZ
    virtual long ValidateVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCaptureBorderVisual@@UEAA@XZ
    virtual ~CCaptureBorderVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCaptureBorderVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCornerRadius@CCaptureBorderVisual@@IEAAXM@Z
    void UpdateCornerRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsMaximizedOrSnapped@CCaptureBorderVisual@@IEAAX_N@Z
    void UpdateIsMaximizedOrSnapped(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInstructions@CCaptureBorderVisual@@IEAAJXZ
    long _UpdateInstructions();
};
