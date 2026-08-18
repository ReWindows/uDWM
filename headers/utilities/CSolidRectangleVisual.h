#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 8 member(s).
class CSolidRectangleVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSolidRectangleVisual@@SAJPEAPEAV1@@Z
    static long Create(CSolidRectangleVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColor@CSolidRectangleVisual@@QEAAXAEBU_D3DCOLORVALUE@@@Z
    void UpdateColor(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRect@CSolidRectangleVisual@@QEAAXAEBUtagRECT@@@Z
    void UpdateRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CSolidRectangleVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSolidRectangleVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateInstructions@CSolidRectangleVisual@@IEAAJXZ
    long _UpdateInstructions();
};
