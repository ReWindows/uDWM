#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDrawBitmapInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z
    static long Create(CBaseImageProxy *, CDrawBitmapInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawBitmapInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawBitmapInstruction@@AEAA@XZ
    CDrawBitmapInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawBitmapInstruction@@AEAAJPEAVCBaseImageProxy@@@Z
    long Initialize(CBaseImageProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawBitmapInstruction@@EEAA@XZ
    virtual ~CDrawBitmapInstruction();
};
