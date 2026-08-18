#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 2 member(s).
class CDisplayModeChangeHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z
    static long CreateDisplayAnimatedVisual(int, CDisplayAnimatedVisual * *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisconnect@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0@Z
    static int IsDisconnect(CDWMDisplaySet *, CDWMDisplaySet *);
};
