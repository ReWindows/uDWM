#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CTopLevelAtlasedRectsVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z
    static long Create(CTopLevelAtlasedRectsVisual * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCloneAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@W4CloneOptions@@@Z
    virtual bool ShouldCloneAtlasImage(CAtlasedImage const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDrawAtlasImage@CTopLevelAtlasedRectsVisual@@MEAA_NPEBVCAtlasedImage@@@Z
    virtual bool ShouldDrawAtlasImage(CAtlasedImage const *);
};
