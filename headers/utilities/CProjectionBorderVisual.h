#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CProjectionBorderVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z
    static long Create(CProjectionBorderVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CProjectionBorderVisual@@QEAAX_N@Z
    void Show(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z
    void UpdateRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z
    void UpdateRectFromWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyle@CProjectionBorderVisual@@QEAAXXZ
    void UpdateStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CProjectionBorderVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z
    long _AddBorderInstructions(tagRECT const &, unsigned int, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z
    long _AddRectInstruction(tagRECT const &, _D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ
    long _UpdateInstructions();
};
