#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 3 member(s).
class CDisplayModeChangeAnimationHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustMinimizeInitialPositionIfNeeded@CDisplayModeChangeAnimationHelper@@SAXPEBVCDWMDisplaySet@@AEBUD2D_POINTANDSIZE_F@@AEBUD2D_POINT_2F@@PEAU4@@Z
    static void AdjustMinimizeInitialPositionIfNeeded(CDWMDisplaySet const *, D2D_POINTANDSIZE_F const &, D2D_POINT_2F const &, D2D_POINT_2F *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Contains@CDisplayModeChangeAnimationHelper@@CA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z
    static bool Contains(D2D_RECT_F const &, D2D_POINT_2F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayFromFinalPosition@CDisplayModeChangeAnimationHelper@@CAPEBVCDWMDisplay@@PEBVCDWMDisplaySet@@AEBUD2D_POINT_2F@@@Z
    static CDWMDisplay const * GetDisplayFromFinalPosition(CDWMDisplaySet const *, D2D_POINT_2F const &);
};
