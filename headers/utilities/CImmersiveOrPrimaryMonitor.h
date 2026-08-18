#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 2 member(s).
class CImmersiveOrPrimaryMonitor {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CImmersiveOrPrimaryMonitor@@AEAAJPEAUHMONITOR__@@@Z
    long Init(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitImpl@CImmersiveOrPrimaryMonitor@@CAXAEBU_DPI_INFORMATION@@PEAUSCALINGINFO@@@Z
    static void InitImpl(_DPI_INFORMATION const &, SCALINGINFO *);
};
