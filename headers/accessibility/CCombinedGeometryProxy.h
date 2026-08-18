#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CCombinedGeometryProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCombinedGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CCombinedGeometryProxy@@QEAAJW4Enum@MilCombineMode@@PEBVCBaseGeometryProxy@@1@Z
    long Update(int, CBaseGeometryProxy const *, CBaseGeometryProxy const *);
};
