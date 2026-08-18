#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CDCompDesktopThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDCompDesktopThumbnail@@SAJPEAPEAV1@@Z
    static long Create(CDCompDesktopThumbnail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldIncludeInSnapshot@CDCompDesktopThumbnail@@UEAA_NPEAVCWindowData@@@Z
    virtual bool v_ShouldIncludeInSnapshot(CWindowData *);
};
