#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CGlassColorizationParameters {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z
    void AdjustWindowColorization(GpCC const *, float, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlassColorizationParameters@@QEAA@XZ
    CGlassColorizationParameters();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z
    void GetColor_scRGB(_D3DCOLORVALUE *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetToDefaults@CGlassColorizationParameters@@QEAAXXZ
    void ResetToDefaults();
};
