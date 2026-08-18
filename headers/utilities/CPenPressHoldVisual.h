#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CPenPressHoldVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CPenPressHoldVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z
    long Start(tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CPenPressHoldVisual@@UEAAXXZ
    virtual void Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPenPressHoldVisual@@IEAA@_K@Z
    CPenPressHoldVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPenPressHoldVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CPenPressHoldVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CPenPressHoldVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenPressHoldVisual@@MEAA@XZ
    virtual ~CPenPressHoldVisual();
};
