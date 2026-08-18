#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CRectangleGeometryProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CRectangleGeometryProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z
    long SetRectangle(float, float, float, float, float, float, float, float, float, float, float, float, bool);
};
