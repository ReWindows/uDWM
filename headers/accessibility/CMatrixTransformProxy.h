#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CMatrixTransformProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMatrixTransformProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    long Update(D2D_MATRIX_3X2_F const &);
};
