#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CImmersiveWindowIconic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z
    static long Create(CWindowData *, int, int, bool, CImmersiveWindowIconic * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z
    long OnIconUpdated(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationTypeUpdated@CImmersiveWindowIconic@@QEAAJH@Z
    long OnRepresentationTypeUpdated(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z
    long SetBitmap(CBitmapSource *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z
    long SetRepresentationType(int, bool);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveWindowIconic@@IEAA@XZ
    CImmersiveWindowIconic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z
    long Initialize(CWindowData *, int, int, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveWindowIconic@@MEAA@XZ
    virtual ~CImmersiveWindowIconic();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ
    long LoadIconW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ
    long _UpdateSolidFill();
};
