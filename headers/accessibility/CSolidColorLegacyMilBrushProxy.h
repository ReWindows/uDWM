#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CSolidColorLegacyMilBrushProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSolidColorLegacyMilBrushProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z
    long Update(double, _D3DCOLORVALUE const &);
};
