#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CTouchDragVisualHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z
    static D2D_POINT_3F Add(D2D_POINT_3F const *, D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBU2@0@Z
    static D2D_VECTOR_3F Add(D2D_VECTOR_3F const *, D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CrossProductZ@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z
    static float CrossProductZ(D2D_VECTOR_3F const *, D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DotProduct@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@0@Z
    static float DotProduct(D2D_VECTOR_3F const *, D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Length@CTouchDragVisualHelper@@SAMPEBUD2D_VECTOR_3F@@@Z
    static float Length(D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@M@Z
    static D2D_POINT_3F Multiply(D2D_POINT_3F const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Multiply@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBU2@M@Z
    static D2D_VECTOR_3F Multiply(D2D_VECTOR_3F const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Normalize@CTouchDragVisualHelper@@SAXPEAUD2D_VECTOR_3F@@@Z
    static void Normalize(D2D_VECTOR_3F *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z
    static void SmoothTouchDragPath(WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_POINT_3F@@PEBU2@PEBUD2D_VECTOR_3F@@@Z
    static D2D_POINT_3F Subtract(D2D_POINT_3F const *, D2D_VECTOR_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Subtract@CTouchDragVisualHelper@@SA?AUD2D_VECTOR_3F@@PEBUD2D_POINT_3F@@0@Z
    static D2D_VECTOR_3F Subtract(D2D_POINT_3F const *, D2D_POINT_3F const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UD2D_POINT_3F@@$0A@@@PEAV?$DynArray@UD2D_POINT_2F@@$0A@@@PEAV?$DynArray@I$0A@@@@Z
    static long TriangulatePathGeometry(float, WindissectOpaque const *, tagRECT const *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z
    static TOUCH_DRAG_POINT GetMidPoint(TOUCH_DRAG_POINT const *, TOUCH_DRAG_POINT const *);
};
