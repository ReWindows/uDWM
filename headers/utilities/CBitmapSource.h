#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CBitmapSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z
    static long Create(CBitmapSource const *, tagRECT const &, _MARGINS const *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z
    static long Create(unsigned int, unsigned int, unsigned int, unsigned int, void const *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z
    static long Create(IWICBitmap *, _MARGINS const *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z
    static long Create(HINSTANCE__*, void *, int, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z
    static long Create(void *, unsigned long, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z
    static long Create(HICON__*, CBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawNineGridInstruction@CBitmapSource@@QEAAJPEAPEAVCDrawNineGridInstruction@@@Z
    long GetDrawNineGridInstruction(CDrawNineGridInstruction * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasSourceClip@CBitmapSource@@QEBA_NXZ
    bool HasSourceClip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ
    bool ReleaseDecoderCopyBuffers();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBitmapSource@@IEAA@XZ
    CBitmapSource();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBitmapSource@@MEAA@XZ
    virtual ~CBitmapSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBitmapSource@@AEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z
    long Update(HICON__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z
    long Update(IWICBitmap *);
};
