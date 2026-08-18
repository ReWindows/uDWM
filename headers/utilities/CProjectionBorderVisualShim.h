#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 11 member(s).
class CProjectionBorderVisualShim {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CProjectionBorderVisualShim@@SAJPEAPEAV1@@Z
    static long Create(CProjectionBorderVisualShim * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderType@CProjectionBorderVisualShim@@QEAAXW4ProjectionBorderType@@@Z
    void SetBorderType(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDpiScale@CProjectionBorderVisualShim@@QEAAXM@Z
    void SetDpiScale(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CProjectionBorderVisualShim@@QEAAX_N@Z
    void Show(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@CProjectionBorderVisualShim@@QEAAXAEBUtagRECT@@@Z
    void UpdateRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRectFromWindow@CProjectionBorderVisualShim@@QEAAXPEAVCWindowData@@@Z
    void UpdateRectFromWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyle@CProjectionBorderVisualShim@@QEAAXXZ
    void UpdateStyle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectionBorderVisualShim@@UEAA@XZ
    virtual ~CProjectionBorderVisualShim();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProjectionBorderVisualShim@@MEAAJXZ
    virtual long Initialize();
};
