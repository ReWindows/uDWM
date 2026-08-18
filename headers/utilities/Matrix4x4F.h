#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
namespace D2D1 {
class Matrix4x4F {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z
    static ::D2D1::Matrix4x4F PerspectiveProjection(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z
    void SetProduct(::D2D1::Matrix4x4F const &, ::D2D1::Matrix4x4F const &);
};
} // namespace D2D1
