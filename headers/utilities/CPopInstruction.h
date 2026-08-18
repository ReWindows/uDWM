#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CPopInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPopInstruction@@SAJPEAPEAV1@@Z
    static long Create(CPopInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CPopInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPopInstruction@@UEAA@XZ
    virtual ~CPopInstruction();
};
