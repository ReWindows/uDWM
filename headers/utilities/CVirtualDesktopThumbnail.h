#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CVirtualDesktopThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CVirtualDesktopThumbnail@@SAJPEAPEAV1@@Z
    static long Create(CVirtualDesktopThumbnail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z
    virtual void NotifyWindowDestruction(CWindowData *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z
    virtual bool v_ShouldIncludeInSnapshot(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShouldShowMinimizedWindows@CVirtualDesktopThumbnail@@MEAA_NXZ
    virtual bool v_ShouldShowMinimizedWindows();
};
