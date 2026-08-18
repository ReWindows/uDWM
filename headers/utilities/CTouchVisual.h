#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CTouchVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOKToCleanup@CTouchVisual@@UEAA_NXZ
    virtual bool IsOKToCleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CTouchVisual@@UEAAXXZ
    virtual void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTouchVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchVisual@@IEAA@_K@Z
    CTouchVisual(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTouchVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CTouchVisual@@MEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ
    long RegisterGlobalTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTimer@CTouchVisual@@MEAAJXZ
    virtual long StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ
    long UnRegisterGlobalTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransition@CTouchVisual@@MEAAJXZ
    virtual long UpdateTransition();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchVisual@@MEAA@XZ
    virtual ~CTouchVisual();
};
