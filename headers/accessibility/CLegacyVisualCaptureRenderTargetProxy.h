#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 4 member(s).
class CLegacyVisualCaptureRenderTargetProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncCaptureBits@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEBVCVisualProxy@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z
    long SyncCaptureBits(CVisualProxy const *, float, int, int, int, int, uint64_t, int *, void * *);
};
