#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 13 member(s).
class CFullScreenMagnifier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFullScreenMagnifier@@SAJPEAVCVisual@@PEAPEAV1@@Z
    static long Create(CVisual *, CFullScreenMagnifier * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoint@CFullScreenMagnifier@@QEAA?AUtagPOINT@@XZ
    tagPOINT GetPoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z
    long OnSetDesktopColorEffect(MilColorTransform const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z
    long OnSetDesktopMagnificationFactor(double, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z
    long OnSetDesktopMagnifierSamplingMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z
    long OnSetPersistentDesktopColorEffect(MilColorTransform const &);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFullScreenMagnifier@@AEAA@PEAVCVisual@@@Z
    CFullScreenMagnifier(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFullScreenMagnifier@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ
    long UpdateColorTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z
    long UpdateSettings(double, double, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFullScreenMagnifier@@EEAA@XZ
    virtual ~CFullScreenMagnifier();
};
