#pragma once
#include "../windissect_forwards.h"

// Reconstructed from uDWM.dll by Windissect. 107 member(s).
class CCompositor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCompositor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDwmChannel@CCompositor@@QEAAJXZ
    long CommitDwmChannel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCompositor@@SAJPEAPEAV1@@Z
    static long Create(CCompositor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationProxy@CCompositor@@QEAAJPEAPEAVCAnimationProxy@@@Z
    long CreateAnimationProxy(CAnimationProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z
    long CreateAnimationTriggerProxyFromSharedHandle(void *, CAnimationTriggerProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAtlasedRectsGroupProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z
    long CreateAtlasedRectsGroupProxy(CAtlasedRectsGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAtlasedRectsMeshProxy@CCompositor@@QEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z
    long CreateAtlasedRectsMeshProxy(CAtlasedRectsMeshProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapSourceProxy@CCompositor@@QEAAJPEAPEAVCBitmapSourceProxy@@@Z
    long CreateBitmapSourceProxy(CBitmapSourceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCachedVisualImageProxy@CCompositor@@QEAAJPEAPEAVCCachedVisualImageProxy@@@Z
    long CreateCachedVisualImageProxy(CCachedVisualImageProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCaptureControllerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCCaptureControllerProxy@@@Z
    long CreateCaptureControllerProxyFromSharedHandle(void *, CCaptureControllerProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorTransformResourceProxy@CCompositor@@QEAAJPEAPEAVCColorTransformResourceProxy@@@Z
    long CreateColorTransformResourceProxy(CColorTransformResourceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCombinedGeometryProxy@CCompositor@@QEAAJPEAPEAVCCombinedGeometryProxy@@@Z
    long CreateCombinedGeometryProxy(CCombinedGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContainerVisualProxy@CCompositor@@QEAAJPEAPEAVCContainerVisualProxy@@@Z
    long CreateContainerVisualProxy(CContainerVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDoubleResourceProxy@CCompositor@@QEAAJPEAPEAVCDoubleResourceProxy@@@Z
    long CreateDoubleResourceProxy(CDoubleResourceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectGroupProxy@CCompositor@@QEAAJPEAPEAVCEffectGroupProxy@@@Z
    long CreateEffectGroupProxy(CEffectGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGaussianBlurEffectProxy@CCompositor@@QEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z
    long CreateGaussianBlurEffectProxy(CGaussianBlurEffectProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometry2dGroupProxy@CCompositor@@QEAAJPEAPEAVCGeometry2dGroupProxy@@@Z
    long CreateGeometry2dGroupProxy(CGeometry2dGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGeometryProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCBaseGeometryProxy@@@Z
    long CreateGeometryProxyFromSharedHandle(void *, CBaseGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicInteropTextureProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCHolographicInteropTextureProxy@@@Z
    long CreateHolographicInteropTextureProxyFromSharedHandle(void *, CHolographicInteropTextureProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z
    long CreateImageLegacyMilBrushProxy(CImageLegacyMilBrushProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIndirectSwapchainRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z
    long CreateIndirectSwapchainRenderTargetProxy(CIndirectSwapchainRenderTargetProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z
    long CreateLegacyVisualCaptureRenderTargetProxy(CLegacyVisualCaptureRenderTargetProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearGradientLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z
    long CreateLinearGradientLegacyMilBrushProxy(CLinearGradientLegacyMilBrushProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z
    long CreateMagnifierRenderTargetProxy(CMagnifierRenderTargetProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform3dProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransform3dProxy@@@Z
    long CreateMatrixTransform3dProxy(CMatrixTransform3dProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z
    long CreateMatrixTransformProxy(CMatrixTransformProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMeshGeometry2dProxy@CCompositor@@QEAAJPEAPEAVCMeshGeometry2dProxy@@@Z
    long CreateMeshGeometry2dProxy(CMeshGeometry2dProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectResourceProxy@CCompositor@@QEAAJPEAPEAVCRectResourceProxy@@@Z
    long CreateRectResourceProxy(CRectResourceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleGeometryProxy@CCompositor@@QEAAJPEAPEAVCRectangleGeometryProxy@@@Z
    long CreateRectangleGeometryProxy(CRectangleGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRedirectVisualProxy@CCompositor@@QEAAJPEAPEAVCRedirectVisualProxy@@@Z
    long CreateRedirectVisualProxy(CRedirectVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderDataBuilder@CCompositor@@QEAAJPEAPEAUIRenderDataBuilder@@@Z
    long CreateRenderDataBuilder(IRenderDataBuilder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderDataProxy@CCompositor@@QEAAJPEAPEAVCRenderDataProxy@@@Z
    long CreateRenderDataProxy(CRenderDataProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z
    long CreateRgnGeometryProxy(CRgnGeometryProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransformProxy@CCompositor@@QEAAJPEAPEAVCRotateTransformProxy@@@Z
    long CreateRotateTransformProxy(CRotateTransformProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransformProxy@CCompositor@@QEAAJPEAPEAVCScaleTransformProxy@@@Z
    long CreateScaleTransformProxy(CScaleTransformProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSizeResourceProxy@CCompositor@@QEAAJPEAPEAVCSizeResourceProxy@@@Z
    long CreateSizeResourceProxy(CSizeResourceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidColorLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z
    long CreateSolidColorLegacyMilBrushProxy(CSolidColorLegacyMilBrushProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform3dGroupProxy@CCompositor@@QEAAJPEAPEAVCTransform3dGroupProxy@@@Z
    long CreateTransform3dGroupProxy(CTransform3dGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroupProxy@CCompositor@@QEAAJPEAPEAVCTransformGroupProxy@@@Z
    long CreateTransformGroupProxy(CTransformGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransformProxy@CCompositor@@QEAAJPEAPEAVCTranslateTransformProxy@@@Z
    long CreateTranslateTransformProxy(CTranslateTransformProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualGroupProxy@CCompositor@@QEAAJPEAPEAVCVisualGroupProxy@@@Z
    long CreateVisualGroupProxy(CVisualGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualGroupProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualGroupProxy@@@Z
    long CreateVisualGroupProxyFromSharedHandle(void *, CVisualGroupProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualProxy@CCompositor@@QEAAJPEAPEAVCVisualProxy@@@Z
    long CreateVisualProxy(CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualProxy@@@Z
    long CreateVisualProxyFromSharedHandle(void *, CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualSurfaceProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualSurfaceProxy@@@Z
    long CreateVisualSurfaceProxyFromSharedHandle(void *, CVisualSurfaceProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualTargetProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCVisualTargetProxy@@@Z
    long CreateVisualTargetProxyFromSharedHandle(void *, CVisualTargetProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRender@CCompositor@@QEAAJXZ
    long ForceRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteTreeEnabled@CCompositor@@QEAA_NXZ
    bool IsRemoteTreeEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDeferralState@CCompositor@@UEAAJ_N@Z
    virtual long NotifyDeferralState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDirty@CCompositor@@UEAAJXZ
    virtual long NotifyDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionSwitchRemotingMode@CCompositor@@QEAAJW4Enum@DwmRemotingMode@@I@Z
    long PartitionSwitchRemotingMode(int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PartitionToggleHolographicSuspension@CCompositor@@QEAAJ_N@Z
    long PartitionToggleHolographicSuspension(bool);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCompositor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCompositor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RoundTripRequest@CCompositor@@QEAAJI@Z
    long RoundTripRequest(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncDesktopCaptureBits@CCompositor@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z
    long SyncDesktopCaptureBits(_LUID, int, int, unsigned int, unsigned int, int, uint64_t, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizedCommit@CCompositor@@QEAAJPEAX@Z
    long SynchronizedCommit(void *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompositor@@IEAA@XZ
    CCompositor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCompositor@@IEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CCompositor@@IEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompositor@@MEAA@XZ
    virtual ~CCompositor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoinitializeWrapper@CCompositor@@AEAAJXZ
    long CoinitializeWrapper();
};
