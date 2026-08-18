#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 7 member(s).
class CSlide {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndependent@CSlide@@UEAA_NXZ
    virtual bool IsIndependent();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSlide@@IEAA@XZ
    CSlide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z
    long _SlideWindow(CWindowData *, float, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z
    long _SlideWindowHorizontally(CWindowData *, tagRECT const &, bool, tagRECT const *, CAnimationComponent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z
    long _SlideWindowVertically(CWindowData *, tagRECT const &, bool, CAnimationComponent * *);
};
