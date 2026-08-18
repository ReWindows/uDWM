#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CAtlasedRectsMeshProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAtlasedRectsMeshProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CAtlasedRectsMeshProxy@@QEAAJH@Z
    long SetOpacity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CAtlasedRectsMeshProxy@@QEAAJ_NHPEBUD2D_RECT_F@@1I@Z
    long Update(bool, int, D2D_RECT_F const *, D2D_RECT_F const *, unsigned int);
};
