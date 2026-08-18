#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 64 member(s).
class CCaptureManager {
public:
    class CAPTURE_DISPLAY_MAP_ENTRY;
    class CAPTURE_FILTERED_DISPLAY_MAP_ENTRY;
    class CAPTURE_FILTERED_WINDOW;
    class CAPTURE_WINDOW_MAP_ENTRY;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long AddRemoveWindowToFilteredDisplayCapture(HWND__*, int, DWM_CAPTURE_TOKEN const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCaptureManager@@QEAA@XZ
    CCaptureManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnAutoParentingChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z
    virtual long OnProcessDisconnected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowClosed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowMinimized(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowMonitorChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowOffsetUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowRestored(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowSizeUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowStyleChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowTransformUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowVisibilityUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowZOrderUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupDisplayCapture(HMONITOR__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupFilteredDisplayCapture(HMONITOR__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupWindowCapture(HWND__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartFilteredDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartWindowCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z
    virtual long StopCapturesForWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopFilteredDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopWindowCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaptureControllerPropertiesFromDisplays@CCaptureManager@@UEAAJXZ
    virtual long UpdateCaptureControllerPropertiesFromDisplays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateDisplayCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateFilteredDisplayCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z
    virtual long UpdateProxyWindowForCapture(HWND__*, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateWindowCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z
    long _AddDisplayCaptureEntry(HMONITOR__*, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z
    long _AddFilteredDisplayCaptureEntry(HMONITOR__*, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &, CContainerVisualProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _AddProjectionBorderForAllDisplays(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _AddProjectionBorderForDisplay(HMONITOR__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z
    long _AddRemoveWindowToFilteredDisplayCapture(HWND__*, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z
    long _AddWindowCaptureEntry(HWND__*, CapturedWindowRepresentation *, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z
    long _AddWindowToFilteredCapture(WindissectOpaque *, WindissectOpaque &&, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ
    void _EnsureCursorStateForCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z
    long _EvaluateWindowForWindowCaptures(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z
    long _GetCapturedItemRootVisual(HWND__*, CVisualProxy * *, CapturedWindowRepresentation * *, CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z
    long _GetDefaultSDRBoostForWindow(CWindowData *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z
    long _GetDesktopRootVisual(CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z
    long _GetHostWindowHandle(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z
    HWND__* _GetHostWindowHandleForProxyWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z
    long _GetProxyWindowHandle(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z
    long _GetWindowRootVisual(HWND__*, bool, CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z
    bool _HasOngoingCapture(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z
    long _RemoveSecondaryWindowFromWindowCaptures(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _SendBoundsToCaptureControllerFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z
    long _SendBoundsToCaptureControllerFromWindow(HWND__*, bool, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z
    long _SetCaptureControllerContentOffset(CCaptureControllerProxy *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z
    long _SetCaptureControllerOffsetTransform(CCaptureControllerProxy *, int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _SetProjectionBorderForWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _SetScreenCaptureForWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _UpdateCaptureControllerCaptureState(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerContentOffsetFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerContentOffsetFromWindow(HWND__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerDefaultSDRBoost(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z
    long _UpdateCaptureControllerDefaultSDRBoost(HWND__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerDefaultSDRBoostFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerTransform(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerTransformFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerTransformFromWindow(HWND__*, bool, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _UpdateDisplayCaptureControllerProperties(WindissectOpaque *);
};
