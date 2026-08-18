#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 16 member(s).
class CAnimationComponent {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z
    CAnimationComponent(HWND__*, int, int, CStoryboard *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ
    int GetWindowZOrder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSnapshot@CAnimationComponent@@QEAA_NXZ
    bool IsSnapshot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogMorph@CAnimationComponent@@QEAAXXZ
    void LogMorph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Morph@CAnimationComponent@@QEAAXXZ
    void Morph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordWindowRect@CAnimationComponent@@QEAAXXZ
    void RecordWindowRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesktopThumbnailVisual@CAnimationComponent@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z
    void SetDesktopThumbnailVisual(CPerMonitorDesktopThumbnail *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGhost@CAnimationComponent@@QEAAXXZ
    void SetGhost();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z
    void SetIconicVisual(CIconicAnimatedVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z
    void SetStagingVisual(CVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransitionVisual@CAnimationComponent@@QEAAXPEAVCAnimatedTransitionVisual@@@Z
    void SetTransitionVisual(CAnimatedTransitionVisual *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationComponent@@UEAA@XZ
    virtual ~CAnimationComponent();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LogEvent@CAnimationComponent@@IEAAXW4AnimationComponentEvent@1@@Z
    void _LogEvent(int);
};
