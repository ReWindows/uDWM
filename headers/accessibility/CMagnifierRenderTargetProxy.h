#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CMagnifierRenderTargetProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMagnifierRenderTargetProxy@@QEAAJ_KAEBUMAGN_ADAPTERTEXTURES@@@Z
    long Create(uint64_t, MAGN_ADAPTERTEXTURES const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMagnifierRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z
    long SetColorTransform(CColorTransformResourceProxy const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z
    long SetFilterList(CVisualGroupProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResampleMode@CMagnifierRenderTargetProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z
    long SetResampleMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CMagnifierRenderTargetProxy@@QEAAJPEBVCMatrixTransformProxy@@@Z
    long SetTransform(CMatrixTransformProxy const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncCaptureBits@CMagnifierRenderTargetProxy@@QEAAJII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z
    long SyncCaptureBits(unsigned int, unsigned int, uint64_t, WindissectOpaque, MAGN_UPDATE_TEXTURES_PARAM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CMagnifierRenderTargetProxy@@QEAAJAEBUMAGN_ADAPTERTEXTURES@@@Z
    long Update(MAGN_ADAPTERTEXTURES const &);
};
