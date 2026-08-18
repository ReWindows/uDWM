#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 5 member(s).
class CImageLegacyMilBrushProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImageLegacyMilBrushProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z
    long Update(double, D2D_RECT_F const &, D2D_RECT_F const &, CDoubleResourceProxy const *, int, int, CRectResourceProxy const *, CRectResourceProxy const *, int, int, int, int, CBaseImageProxy const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImageLegacyMilBrushProxy@@MEAA@XZ
    virtual ~CImageLegacyMilBrushProxy();
};
