#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CDesktopThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeDesktopThumbnail@CDesktopThumbnail@@SAJPEAVCWindowData@@_N@Z
    static long FreezeDesktopThumbnail(CWindowData *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z
    static long GetDesktopThumbnail(CDesktopThumbnail * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPerMonitorDesktopThumbnail@CDesktopThumbnail@@QEAAJUtagRECT@@PEAPEAVCPerMonitorDesktopThumbnail@@@Z
    long GetPerMonitorDesktopThumbnail(tagRECT, CPerMonitorDesktopThumbnail * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ
    static bool IsDesktopThumbnailInSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMonitorThumbnailDestroyed@CDesktopThumbnail@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z
    void OnMonitorThumbnailDestroyed(CPerMonitorDesktopThumbnail *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDesktopThumbnail@@KAJPEAPEAV1@@Z
    static long Create(CDesktopThumbnail * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopThumbnail@@MEAA@XZ
    virtual ~CDesktopThumbnail();
};
