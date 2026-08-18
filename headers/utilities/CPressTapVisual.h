#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CPressTapVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z
    long Start(tagPOINT const *, tagRECT const *, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CPressTapVisual@@UEAAXXZ
    virtual void Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPressTapVisual@@IEAA@_K@Z
    CPressTapVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPressTapVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CPressTapVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CPressTapVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPressTapVisual@@MEAA@XZ
    virtual ~CPressTapVisual();
};
