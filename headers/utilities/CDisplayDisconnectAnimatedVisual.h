#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CDisplayDisconnectAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayDisconnectAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ
    CDisplayDisconnectAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayDisconnectAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayDisconnectAnimatedVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayDisconnectAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayDisconnectAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayDisconnectAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelay@CDisplayDisconnectAnimatedVisual@@AEAAJXZ
    long SetupDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
