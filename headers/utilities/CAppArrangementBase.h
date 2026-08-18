#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 9 member(s).
class CAppArrangementBase {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppArrangementBase@@UEAA@XZ
    virtual ~CAppArrangementBase();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppArrangementBase@@IEAA@_N@Z
    CAppArrangementBase(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldCancelLivePreview@CAppArrangementBase@@MEAA_NXZ
    virtual bool ShouldCancelLivePreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z
    void _AddToAnimatingMonitors(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveGhostWindow@CAppArrangementBase@@IEAAPEAVCWindowData@@PEAV2@@Z
    CWindowData * _GetImmersiveGhostWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsOnAnimatingMonitor@CAppArrangementBase@@IEAA_NAEBUtagRECT@@@Z
    bool _IsOnAnimatingMonitor(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z
    virtual bool _WindowEnumCallback(CWindowData *, int, long *);
};
