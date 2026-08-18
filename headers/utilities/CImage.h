#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CImage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CImage@@SAJPEAPEAV1@@Z
    static long Create(CImage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z
    void SetBitmapSource(CBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CImage@@UEAAXN@Z
    virtual void SetOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBitmap@CImage@@QEAAJXZ
    long UpdateBitmap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CImage@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOpacity@CImage@@MEAAJXZ
    virtual long UpdateOpacity();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImage@@EEAAJXZ
    virtual long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImage@@EEAA@XZ
    virtual ~CImage();
};
