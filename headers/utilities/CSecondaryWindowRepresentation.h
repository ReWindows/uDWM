#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 36 member(s).
class CSecondaryWindowRepresentation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z
    static long Create(WindissectOpaque, ISecondaryWindowRepresentationChangedListener *, CWindowData *, unsigned int, int, CSecondaryWindowRepresentation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z
    long CreateBrushForCVI(int, CCachedVisualImageProxy *, CRectResourceProxy *, CDoubleResourceProxy *, CImageLegacyMilBrushProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z
    CCachedVisualImageProxy * CreateCVIForAnimation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ
    long EnsureOwnedWindowVisual();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z
    long GetBrush(int, CRectResourceProxy * *, CRectResourceProxy * *, CDoubleResourceProxy * *, CSizeResourceProxy * *, CCachedVisualImageProxy * *, CImageLegacyMilBrushProxy * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ
    int GetIconicHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ
    int GetIconicWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeWindowRect@CSecondaryWindowRepresentation@@QEBA?AUtagRECT@@XZ
    tagRECT GetRelativeWindowRect() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ
    int GetThumbnailType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUD2D_POINTANDSIZE_L@@PEAPEAVCCachedVisualImageProxy@@@Z
    void MakeStatic(bool, D2D_POINTANDSIZE_L const *, CCachedVisualImageProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z
    long OnEligibleOwnedWindowAddedOrRemoved(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ
    void OnMarginsOrSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationTypeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ
    void OnRepresentationTypeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ
    long OnRepresentationUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootVisualChanged@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z
    virtual void OnRootVisualChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z
    virtual void OnSWRInvalidated(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z
    virtual void OnSizeChanged(CSecondaryWindowRepresentation const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ
    long OnSourceConstantAlphaUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z
    void OnWindowDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ
    void OnWindowOffsetUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUD2D_POINTANDSIZE_L@@@Z
    void SnapshotIfStatic(CCachedVisualImageProxy *, CImageLegacyMilBrushProxy *, D2D_POINTANDSIZE_L const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ
    long Validate();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSecondaryWindowRepresentation@@IEAA@XZ
    CSecondaryWindowRepresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z
    long Initialize(WindissectOpaque, ISecondaryWindowRepresentationChangedListener *, CWindowData *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSecondaryWindowRepresentation@@MEAA@XZ
    virtual ~CSecondaryWindowRepresentation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWindowMetrics@CSecondaryWindowRepresentation@@AEAA_NPEAUtagSIZE@@PEAU_MARGINS@@@Z
    bool CalculateWindowMetrics(tagSIZE *, _MARGINS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ
    int GetTLWRootVisualType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ
    void ReleaseAllResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseResources@CSecondaryWindowRepresentation@@AEAAXW4WindowFramePart@1@@Z
    void ReleaseResources(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z
    void RemoveOwnedWindowRepresentation(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z
    void SetDirtyFlags(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlpha@CSecondaryWindowRepresentation@@AEAAJXZ
    long UpdateAlpha();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ
    long UpdateOwnedWindowVisualTreeRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetRelativeWindowRect@CSecondaryWindowRepresentation@@CA?AUtagRECT@@AEBUtagSIZE@@AEBU_MARGINS@@@Z
    static tagRECT s_GetRelativeWindowRect(tagSIZE const &, _MARGINS const &);
};
