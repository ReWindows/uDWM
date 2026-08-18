#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDrawGeometryInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z
    static long Create(CBaseLegacyMilBrushProxy *, CBaseGeometryProxy *, CDrawGeometryInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawGeometryInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawGeometryInstruction@@AEAA@XZ
    CDrawGeometryInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawGeometryInstruction@@AEAAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@@Z
    long Initialize(CBaseLegacyMilBrushProxy *, CBaseGeometryProxy *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawGeometryInstruction@@EEAA@XZ
    virtual ~CDrawGeometryInstruction();
};
