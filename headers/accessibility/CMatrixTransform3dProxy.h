#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CMatrixTransform3dProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMatrixTransform3dProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z
    long Update(_D3DMATRIX const &);
};
