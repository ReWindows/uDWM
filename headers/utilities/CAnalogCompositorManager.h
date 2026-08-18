#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CAnalogCompositorManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHMDStatus@CAnalogCompositorManager@@SAJPEAUMILCMD_DWM_REDIRECTION_GETHMDSTATUS@@@Z
    static long GetHMDStatus(MILCMD_DWM_REDIRECTION_GETHMDSTATUS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualMonitorsInstalled@CAnalogCompositorManager@@SA_NXZ
    static bool IsVirtualMonitorsInstalled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeChange@CAnalogCompositorManager@@SAJXZ
    static long ModeChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z
    static long SetExclusiveView(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnalogCompositorManager@@AEAA@XZ
    CAnalogCompositorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureExclusiveMode@CAnalogCompositorManager@@AEAAJXZ
    long EnsureExclusiveMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ
    static CAnalogCompositorManager * GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ
    void InitializeDisplayManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ
    void OnHolographicDisplayCalibrationDriverDetected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHolographicDisplayCalibrationDriverLost@CAnalogCompositorManager@@AEAAXXZ
    void OnHolographicDisplayCalibrationDriverLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ
    long OnMonitorChangedNotification();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusiveViewImpl@CAnalogCompositorManager@@AEAAJI@Z
    long SetExclusiveViewImpl(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalDesktopModeSwitchImpl@CAnalogCompositorManager@@AEAAJ_K@Z
    long SignalDesktopModeSwitchImpl(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleLockBackstopImpl@CAnalogCompositorManager@@AEAAJ_N@Z
    long ToggleLockBackstopImpl(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ
    long UpdateHolographicLockState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnalogCompositorManager@@AEAA@XZ
    ~CAnalogCompositorManager();
};
