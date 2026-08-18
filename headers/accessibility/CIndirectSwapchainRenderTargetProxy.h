#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
class CIndirectSwapchainRenderTargetProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncCreate@CIndirectSwapchainRenderTargetProxy@@QEAAJPEAXU_LUID@@PEBVCVisualProxy@@@Z
    long SyncCreate(void *, _LUID, CVisualProxy const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ
    long Unregister();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTargetBounds@CIndirectSwapchainRenderTargetProxy@@QEAAJIIII@Z
    long UpdateTargetBounds(unsigned int, unsigned int, unsigned int, unsigned int);
};
