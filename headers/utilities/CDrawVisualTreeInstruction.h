#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDrawVisualTreeInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawVisualTreeInstruction@@SAJPEAVCVisual@@PEAPEAV1@@Z
    static long Create(CVisual *, CDrawVisualTreeInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawVisualTreeInstruction@@AEAA@XZ
    CDrawVisualTreeInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawVisualTreeInstruction@@AEAAJPEAVCVisual@@@Z
    long Initialize(CVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawVisualTreeInstruction@@EEAA@XZ
    virtual ~CDrawVisualTreeInstruction();
};
