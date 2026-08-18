#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CRgnGeometryProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRgnGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z
    long Update(tagRECT const *, unsigned int);
};
