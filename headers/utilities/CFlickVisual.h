#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CFlickVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CFlickVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z
    long Start(tagPOINT const *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CFlickVisual@@UEAAXXZ
    virtual void Stop();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlickVisual@@IEAA@_K@Z
    CFlickVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlickVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CFlickVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CFlickVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlickVisual@@MEAA@XZ
    virtual ~CFlickVisual();
};
