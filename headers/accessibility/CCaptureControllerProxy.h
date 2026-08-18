#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CCaptureControllerProxy {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CCaptureControllerProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCaptureState@CCaptureControllerProxy@@QEAAJ_N@Z
    long SetCaptureState(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffset@CCaptureControllerProxy@@QEAAJHH@Z
    long SetContentOffset(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CCaptureControllerProxy@@QEAAJNN@Z
    long SetContentSize(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSDRBoost@CCaptureControllerProxy@@QEAAJM@Z
    long SetDefaultSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z
    long SetReferenceVisual(CVisualProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootVisual@CCaptureControllerProxy@@QEAAJPEAVCVisualProxy@@@Z
    long SetRootVisual(CVisualProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuspendOnScreenOff@CCaptureControllerProxy@@QEAAJ_N@Z
    long SetSuspendOnScreenOff(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CCaptureControllerProxy@@QEAAJPEAVCMatrixTransformProxy@@@Z
    long SetTransform(CMatrixTransformProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z
    long SetWindowInfos(_DWMCaptureWindowInformation const *, unsigned int);
};
