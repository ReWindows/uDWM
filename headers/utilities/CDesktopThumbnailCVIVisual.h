#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 12 member(s).
class CDesktopThumbnailCVIVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CDesktopThumbnailCVIVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z
    static long Create(CDesktopThumbnailCVIVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceRect@CDesktopThumbnailCVIVisual@@QEAA?AUtagRECT@@XZ
    tagRECT GetSourceRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z
    virtual void SetDirtyFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z
    long SetVisual(CDesktopThumbnailCVI *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z
    void Update(tagRECT const &, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ
    virtual long ValidateVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CDesktopThumbnailCVIVisual@@IEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CDesktopThumbnailCVIVisual *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopThumbnailCVIVisual@@MEAA@XZ
    virtual ~CDesktopThumbnailCVIVisual();
};
