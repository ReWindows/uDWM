#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CMagnifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z
    static long Create(HWND__*, int, CVisual *, CMagnifier * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptureRTBits@CMagnifier@@QEAAX_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@PEAJ@Z
    void OnCaptureRTBits(uint64_t, unsigned long, MAGN_UPDATE_TEXTURES_PARAM const *, MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z
    long OnModifyWindowFilterList(MAGN_FILTERLIST const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z
    long OnSetColorEffect(MilColorTransform const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z
    long OnSetMagnifierSamplingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z
    long OnSetRenderTargetTextures(MAGN_ADAPTERTEXTURES const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMagnifier@@AEAA@PEAUHWND__@@HPEAVCVisual@@@Z
    CMagnifier(HWND__*, int, CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMagnifier@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptureRTBitsWorker@CMagnifier@@AEAAJ_KKPEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAUMILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY@@@Z
    long OnCaptureRTBitsWorker(uint64_t, unsigned long, MAGN_UPDATE_TEXTURES_PARAM const *, MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMagnifier@@EEAA@XZ
    virtual ~CMagnifier();
};
