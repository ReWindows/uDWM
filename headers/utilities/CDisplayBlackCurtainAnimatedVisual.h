#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CDisplayBlackCurtainAnimatedVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z
    static long Create(CDisplayBlackCurtainAnimatedVisual * *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ
    CDisplayBlackCurtainAnimatedVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDisplayBlackCurtainAnimatedVisual@@MEAA@XZ
    virtual ~CDisplayBlackCurtainAnimatedVisual();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationScenarioGuid@CDisplayBlackCurtainAnimatedVisual@@EEBA?AU_GUID@@XZ
    virtual _GUID GetAnimationScenarioGuid() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalDuration@CDisplayBlackCurtainAnimatedVisual@@EEBAJPEAI@Z
    virtual long GetTotalDuration(unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleteImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJI@Z
    virtual long OnAnimationCompleteImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdatedImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ
    virtual long OnGlobalTimeUpdatedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDelay@CDisplayBlackCurtainAnimatedVisual@@AEAAJXZ
    long SetupDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ
    virtual long StartImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopImpl@CDisplayBlackCurtainAnimatedVisual@@EEAAJXZ
    virtual long StopImpl();
};
