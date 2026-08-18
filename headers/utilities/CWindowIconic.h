#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 27 member(s).
class CWindowIconic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ
    void CleanupAnimationResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupThemeStatics@CWindowIconic@@SAXXZ
    static void CleanupThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z
    static long Create(CWindowData *, CWindowIconic * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeStatics@CWindowIconic@@SAJXZ
    static long EnsureThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z
    long OnAlphaUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientMarginsUpdated@CWindowIconic@@QEAAJXZ
    long OnClientMarginsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z
    long OnColorizationUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ
    long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z
    long OnIconUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ
    long OnRepresentationTypeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z
    long OnSettingsUpdated(unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z
    long OnTitleUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CWindowIconic@@QEAAJXZ
    long OnWindowSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z
    long OnWindowStyleUpdated(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z
    long SetBitmap(CBitmapSource *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z
    long SetRepresentationType(int, bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowIconic@@IEAA@XZ
    CWindowIconic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z
    long Initialize(CWindowData *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowIconic@@MEAA@XZ
    virtual ~CWindowIconic();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z
    long GetWindowRectForLivePreview(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCentralImage@CWindowIconic@@AEAAJXZ
    long LoadCentralImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientArea@CWindowIconic@@AEAAJXZ
    long UpdateClientArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloneSize@CWindowIconic@@AEAAXAEBUtagRECT@@AEBU_MARGINS@@@Z
    void UpdateCloneSize(tagRECT const &, _MARGINS const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z
    long UpdateSizeOrMargins(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasMaximized@CWindowIconic@@AEAA_NXZ
    bool WasMaximized();
};
