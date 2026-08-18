#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CSolidRectangleInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z
    static long Create(CSolidRectangleInstruction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void SetRect(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z
    long SetSolidFill(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CSolidRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSolidRectangleInstruction@@AEAA@XZ
    CSolidRectangleInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSolidRectangleInstruction@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSolidRectangleInstruction@@EEAA@XZ
    virtual ~CSolidRectangleInstruction();
};
