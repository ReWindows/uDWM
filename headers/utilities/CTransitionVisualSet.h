#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
namespace CAnimationEngine {
class CTransitionVisualSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ
    long BindAnimationCurves();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTransitionVisualSet@CAnimationEngine@@QEAA@IH@Z
    CTransitionVisualSet(unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z
    long Initialize(IAnimatedVisual * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ
    void OnTick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ
    long PopulateAnimationCurves();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z
    void SetStoryboard(IUIAnimationStoryboard2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ
    void StopStoryboard();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ
    virtual ~CTransitionVisualSet();
};
} // namespace CAnimationEngine
