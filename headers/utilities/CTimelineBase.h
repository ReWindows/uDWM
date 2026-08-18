#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 11 member(s).
class CTimelineBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimelineBase@@QEAA@NNNUInterpolationParameters@@N@Z
    CTimelineBase(double, double, double, InterpolationParameters, double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z
    CTimelineBase(double, double, double, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTimelineBase@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restart@CTimelineBase@@QEAAXN@Z
    void Restart(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTimelineBase@@UEAA@XZ
    virtual ~CTimelineBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?JumpToFinalValue@CTimelineBase@@AEAAXXZ
    void JumpToFinalValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAfterTickWorker@CTimelineBase@@AEAAXXZ
    void UpdateAfterTickWorker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBeforeTickResultWorker@CTimelineBase@@AEAAX_N@Z
    void UpdateBeforeTickResultWorker(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBeforeTickWorker@CTimelineBase@@AEAAJPEAUWindowsAnimation@@@Z
    long UpdateBeforeTickWorker(WindowsAnimation *);
};
