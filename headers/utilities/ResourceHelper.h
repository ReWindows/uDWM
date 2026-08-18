#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class ResourceHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z
    static long CreateCombinedGeometry(CBaseGeometryProxy const *, CBaseGeometryProxy const *, int, CCombinedGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z
    static long CreateGeometryFromHRGN(HRGN__*, CRgnGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUD2D_POINTANDSIZE_L@@MPEAPEAVCRectangleGeometryProxy@@@Z
    static long CreateRectangleGeometry(D2D_POINTANDSIZE_L const &, float, CRectangleGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z
    static long CreateRectangleGeometry(tagRECT const *, CRectangleGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z
    static long CreateRectangleGeometry(int, int, int, int, CRectangleGeometryProxy * *);
};
