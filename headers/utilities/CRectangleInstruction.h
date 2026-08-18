#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CRectangleInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z
    static long Create(CRectangleInstruction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z
    long SetLinearGradientFill(bool, _D3DCOLORVALUE const &, _D3DCOLORVALUE const &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRect@CRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    void SetRect(WindissectOpaque const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z
    long SetSolidFill(_D3DCOLORVALUE const &, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CRectangleInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRectangleInstruction@@AEAA@XZ
    CRectangleInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRectangleInstruction@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRectangleInstruction@@EEAA@XZ
    virtual ~CRectangleInstruction();
};
