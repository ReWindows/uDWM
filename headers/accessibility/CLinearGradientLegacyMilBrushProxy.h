#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CLinearGradientLegacyMilBrushProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLinearGradientLegacyMilBrushProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUD2D_POINT_2F@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z
    long Update(double, D2D_POINT_2F const &, D2D_POINT_2F const &, int, int, int, MilGradientStop const *, unsigned int);
};
