#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CDrawNineGridInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z
    static long Create(CBitmapSource *, CDrawNineGridInstruction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z
    static void GetCurrentRect(unsigned int, NineGridLayout &, D2D_POINTANDSIZE_L *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z
    static void GetNineGridLayout(_MARGINS, D2D_POINTANDSIZE_L const &, NineGridLayout *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawNineGridInstruction@@IEAA@XZ
    CDrawNineGridInstruction();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawNineGridInstruction@@MEAA@XZ
    virtual ~CDrawNineGridInstruction();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z
    long Initialize(CBitmapSource *);
};
