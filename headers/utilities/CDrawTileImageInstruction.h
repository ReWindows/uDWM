#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CDrawTileImageInstruction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z
    static long Create(CBaseImageProxy *, tagRECT const &, tagPOINT const &, float, CDrawTileImageInstruction * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z
    virtual long WriteInstruction(IRenderDataBuilder *, CVisual const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDrawTileImageInstruction@@AEAA@XZ
    CDrawTileImageInstruction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDrawTileImageInstruction@@AEAAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@M@Z
    long Initialize(CBaseImageProxy *, tagRECT const &, tagPOINT const &, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDrawTileImageInstruction@@EEAA@XZ
    virtual ~CDrawTileImageInstruction();
};
