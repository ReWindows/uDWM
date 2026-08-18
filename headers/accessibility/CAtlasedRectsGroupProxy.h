#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CAtlasedRectsGroupProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasedRectsGroupProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CAtlasedRectsGroupProxy@@QEAAJPEBVCBitmapSourceProxy@@PEAPEAVCAtlasedRectsMeshProxy@@I@Z
    long Update(CBitmapSourceProxy const *, CAtlasedRectsMeshProxy * *, unsigned int);
};
