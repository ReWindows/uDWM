#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDrawMesh2DInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawMesh2DInstruction@@SAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@PEAPEAV1@@Z
    static long Create(CGeometry2dGroupProxy *, CBitmapSourceProxy *, CDrawMesh2DInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawMesh2DInstruction@@AEAA@XZ
    CDrawMesh2DInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawMesh2DInstruction@@AEAAJPEAVCGeometry2dGroupProxy@@PEAVCBitmapSourceProxy@@@Z
    long Initialize(CGeometry2dGroupProxy *, CBitmapSourceProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawMesh2DInstruction@@EEAA@XZ
    virtual ~CDrawMesh2DInstruction();
};
