#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 24 member(s).
class CVisualProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVisualProxy@@QEAA@XZ
    CVisualProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVisualProxy@@QEAAJPEAUIDwmChannel@@@Z
    long Initialize(IDwmChannel *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeFromSharedHandle@CVisualProxy@@QEAAJPEAUIDwmChannel@@PEAX@Z
    long InitializeFromSharedHandle(IDwmChannel *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetExcludeFromDDA@CVisualProxy@@QEAAJ_N@Z
    long PartitionSetExcludeFromDDA(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSetMagnifier@CVisualProxy@@QEAAJ_N@Z
    long PartitionSetMagnifier(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CVisualProxy@@QEAAJPEBVCResourceProxy@@PEBUtagRECT@@@Z
    long SetBlurredWallpaperSurface(CResourceProxy const *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@CVisualProxy@@QEAAJW4Enum@MilBitmapBorderMode@@@Z
    long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z
    long SetClip(CBaseGeometryProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorTransform@CVisualProxy@@QEAAJPEBVCColorTransformResourceProxy@@@Z
    long SetColorTransform(CColorTransformResourceProxy const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z
    long SetEffect(CResourceProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z
    long SetExcludeSubtree(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationMode@CVisualProxy@@QEAAJW4Enum@MilBitmapInterpolationMode@@@Z
    long SetInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CVisualProxy@@QEAAJNNN@Z
    long SetOffset(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CVisualProxy@@QEAAJ_N00@Z
    long SetOptions(bool, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z
    long SetPassiveUpdateMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResampleMode@CVisualProxy@@QEAAJW4Enum@CompositionResampleMode@@@Z
    long SetResampleMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CVisualProxy@@QEAAJNN@Z
    long SetSize(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z
    long SetTransform(CBaseTransformProxy *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualProtectContent@CVisualProxy@@QEAAJ_N@Z
    long SetVisualProtectContent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopLevelNode@CVisualProxy@@QEAAJPEAUHWND__@@_N@Z
    long TopLevelNode(HWND__*, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVisualProxy@@UEAA@XZ
    virtual ~CVisualProxy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDCompositionVisual@CVisualProxy@@IEAAJXZ
    long InitializeDCompositionVisual();
};
