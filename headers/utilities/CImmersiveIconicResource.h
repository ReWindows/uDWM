#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 6 member(s).
namespace CImmersiveIconicBitmapRegistry {
class CImmersiveIconicResource {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z
    CBitmapSource * GetBitmapSourceNoRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@W4IconicRepresentationType@@W4DEVICE_SCALE_FACTOR@@@Z
    CBitmapSource * GetBitmapSourceNoRef(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z
    int GetIconicRepresentationTypeClosestToSize(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z
    void SetBitmapResource(CBitmapSource *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA@XZ
    ~CImmersiveIconicResource();
};
} // namespace CImmersiveIconicBitmapRegistry
