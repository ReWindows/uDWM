#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 14 member(s).
class CDWMDisplay {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorInternalInfo@CDWMDisplay@@QEBAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z
    long GetMonitorInternalInfo(_LUID, unsigned int, _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAngle@CDWMDisplay@@QEBAHXZ
    int GetRotationAngle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDDisplayCompatible@CDWMDisplay@@QEAA_NXZ
    bool IsDDisplayCompatible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z
    bool IsEquivalentTo(CDWMDisplay const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRenderTargetEquivalentTo@CDWMDisplay@@QEBA_NPEBV1@@Z
    bool IsRenderTargetEquivalentTo(CDWMDisplay const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z
    bool IsSamePhysicalDisplay(CDWMDisplay const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ
    bool IsTsDisplay() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z
    bool RefreshRateChanged(CDWMDisplay const *) const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDWMDisplay@@QEBAKXZ
    unsigned long Release() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z
    void SetDcompTarget(IDCompositionRenderTargetPartner *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z
    CDWMDisplay(bool, CDWMDXGIAdapter *, DXGIOutputInfo const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDWMDisplay@@AEAA@AEBV0@@Z
    CDWMDisplay(CDWMDisplay const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDWMDisplay@@AEAA@XZ
    ~CDWMDisplay();
};
