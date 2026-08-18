#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 10 member(s).
class CDesktopThumbnailCVI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z
    long CreateBrush(CImageLegacyMilBrushProxy * *, CCachedVisualImageProxy * *, CRectResourceProxy * *, tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCVIRect@CDesktopThumbnailCVI@@QEAA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@XZ
    WindissectOpaque GetCVIRect();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealizationSize@CDesktopThumbnailCVI@@QEAA?AUtagSIZE@@XZ
    tagSIZE GetRealizationSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesktopThumbnailCVI@@UEAAJXZ
    virtual long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisual@CDesktopThumbnailCVI@@QEAAXPEAVCDesktopThumbnailBase@@@Z
    void SetVisual(CDesktopThumbnailBase *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDesktopThumbnailCVI@@IEAA@XZ
    CDesktopThumbnailCVI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ
    long _EnsureResources();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDesktopThumbnailCVI@@MEAA@XZ
    virtual ~CDesktopThumbnailCVI();
};
