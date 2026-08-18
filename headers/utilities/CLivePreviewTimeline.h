#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CLivePreviewTimeline {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLivePreviewTimeline@@QEAA@XZ
    CLivePreviewTimeline();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ
    double GetCurrentOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z
    long RestartTimeline(int, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLivePreviewTimeline@@UEAA@XZ
    virtual ~CLivePreviewTimeline();
};
