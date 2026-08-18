#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CContactStationaryVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CContactStationaryVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z
    long Start(int, tagPOINT const *, tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CContactStationaryVisual@@UEAAXXZ
    virtual void Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactStationaryVisual@@IEAA@_K@Z
    CContactStationaryVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CContactStationaryVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CContactStationaryVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactStationaryVisual@@MEAA@XZ
    virtual ~CContactStationaryVisual();
};
