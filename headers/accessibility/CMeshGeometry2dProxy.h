#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CMeshGeometry2dProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMeshGeometry2dProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CMeshGeometry2dProxy@@QEAAJHPEBUD2D_POINT_3F@@PEBUD2D_POINT_2F@@IPEBII@Z
    long Update(int, D2D_POINT_3F const *, D2D_POINT_2F const *, unsigned int, unsigned int const *, unsigned int);
};
