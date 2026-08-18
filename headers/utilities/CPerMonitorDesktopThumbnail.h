#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CPerMonitorDesktopThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPerMonitorDesktopThumbnail@@SAJPEAPEAV1@@Z
    static long Create(CPerMonitorDesktopThumbnail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z
    long FreezeDesktopThumbnail(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@CPerMonitorDesktopThumbnail@@QEAAPEAUHMONITOR__@@XZ
    HMONITOR__* GetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@CPerMonitorDesktopThumbnail@@QEAAXPEAUHMONITOR__@@@Z
    void SetMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CPerMonitorDesktopThumbnail@@QEAAXPEAVCDesktopThumbnail@@@Z
    void SetVisual(CDesktopThumbnail *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetRealizationSize@CPerMonitorDesktopThumbnail@@MEAAJPEAUtagSIZE@@@Z
    virtual long v_GetRealizationSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetSourceRect@CPerMonitorDesktopThumbnail@@MEAAJPEAUtagRECT@@@Z
    virtual long v_GetSourceRect(tagRECT *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerMonitorDesktopThumbnail@@EEAA@XZ
    virtual ~CPerMonitorDesktopThumbnail();
};
