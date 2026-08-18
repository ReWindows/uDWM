#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CPushTransformInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z
    static long Create(CBaseTransformProxy *, CPushTransformInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CPushTransformInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPushTransformInstruction@@AEAA@XZ
    CPushTransformInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPushTransformInstruction@@AEAAJPEAVCBaseTransformProxy@@@Z
    long Initialize(CBaseTransformProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPushTransformInstruction@@EEAA@XZ
    virtual ~CPushTransformInstruction();
};
