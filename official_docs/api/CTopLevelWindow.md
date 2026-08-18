# `global` :: `CTopLevelWindow`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `uDWM.dll`. Total members: **189**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CAnimationEngine; 
class CCaptureManager; 
class CImmersiveIconicBitmapRegistry; 
class CMagnifierControl; 
class CProjectedShadowScene; 
class CThemeAnimationScheduleHelper; 
class CTopLevelWindow; 
class CWindowBorder; 
class CWindowPropertyTracker; 
class CapturedWindowRepresentation; 
namespace Microsoft { namespace WRL { class Details; } } 
class WindowFrameLoggingTelemetry; 
class tson; 
class winrt; 
class ACCENT_POLICY; class AnimationClockLogging; class AnimationIdInfo; class AtlasedRects; class CAccent; class CAccentAcrylicBlurBehind; class CAccentTransition; class CAccentTransitionAnimatedVisual; class CAcrylicSheet; class CAcrylicSystemBackdropVisual; class CAnalogCompositorManager; class CAnimatedTransitionVisual; class CAnimationClock; class CAnimationClockCoordinator; class CAnimationClockFactory; class CAnimationComponent; class CAnimationEngine; class CAnimationProxy; class CAnimationResource; class CAnimationScheduler; class CAnimationTriggerProxy; class CAppArrangementBase; class CAppArrangementDelayed; class CAppArrangementImmediate; class CAppLaunch; class CAppLaunchSwitch; class CAppSwitch; class CAtlasButton; class CAtlasedImage; class CAtlasedRectsGroupProxy; class CAtlasedRectsMeshProxy; class CAtlasedRectsVisual; class CAutoRestoreAnimationWindowData; class CBaseGeometryProxy; class CBaseImageProxy; class CBaseLegacyMilBrushProxy; class CBaseObject; class CBaseRenderTargetProxy; class CBaseTransformProxy; class CBitmapSource; class CBitmapSourceArray; class CBitmapSourceProxy; class CButton; class CCachedVisualImageProxy; class CCanvasVisual; class CCaptureBorderVisual; class CCaptureControllerProxy; class CCaptureManager; class CChangePanel; class CClientArea; class CColorTransformResourceProxy; class CCombinedGeometryProxy; class CCompositionEffectCache; class CCompositor; class CContactManager; class CContactStationaryVisual; class CContainerVisual; class CContainerVisualProxy; class CCrossFade; class CCubicBezierInterpolator; class CCursorVisual; class CCursorVisualProxy; class CDCompDesktopThumbnail; class CDCompDesktopThumbnailCVI; class CDCompThumbnailData; class CDCompVirtualDesktopThumbnailData; class CDDisplayManager; class CDWMDXGIAdapter; class CDWMDXGIEnumeration; class CDWMDisplay; class CDWMDisplaySet; class CDWriteText; class CDesktop; class CDesktopManager; class CDesktopThumbnail; class CDesktopThumbnailBase; class CDesktopThumbnailCVI; class CDesktopThumbnailCVIVisual; class CDesktopWindowReplacement; class CDialogSwitch; class CDirectTouchVisual; class CDisplayAnimatedVisual; class CDisplayBlackCurtainAnimatedVisual; class CDisplayBroker; class CDisplayDisconnectAnimatedVisual; class CDisplayDuplicateAnimatedVisual; class CDisplayDuplicateToExtendAnimatedVisual; class CDisplayExtendAnimatedVisual; class CDisplayExtendToDuplicateAnimatedVisual; class CDisplayMixedModeAnimatedVisual; class CDisplayModeChangeAnimationHelper; class CDisplayModeChangeHelper; class CDisplaySecondaryOnlyAnimatedVisual; class CDisplaySecondaryOnlyToDuplicateAnimatedVisual; class CDisplaySecondaryOnlyToExtendAnimatedVisual; class CDoubleResourceProxy; class CDrawBitmapInstruction; class CDrawGeometryInstruction; class CDrawMesh2DInstruction; class CDrawNineGridInstruction; class CDrawTileImageInstruction; class CDrawVisualTreeInstruction; class CEffectGroupProxy; class CFade; class CFadeIn; class CFadeOut; class CFlickVisual; class CFlyoutPopup; class CFullScreenMagnifier; class CGaussianBlurEffectProxy; class CGeometry2dGroupProxy; class CGlassColorizationParameters; class CGlassColorizationResources; class CGlobalLightSet; class CGlobalTimeTrackVisual; class CGraphicsDeviceManager; class CGroupingStoryboard; class CGrowPanel; class CHidePopup; class CHolographicInteropTextureProxy; class CHolographicSlate; class CIconicAnimatedVisual; class CIconicBitmapRegistry; class CImage; class CImageLegacyMilBrushProxy; class CImmersiveColor; class CImmersiveIconicBitmapRegistry; class CImmersiveOrPrimaryMonitor; class CImmersiveState; class CImmersiveWindowIconic; class CIndirectSwapchainRenderTargetProxy; class CIndirectTouchVisual; class CInplaceResize; class CInputView; class CInputView_DockedToFloating; class CInputView_FloatingToDocked; class CInputView_SizeChangeOnly; class CInputView_SizeOrModeChangeBase; class CKeystateTextFeedback; class CLaunchSwitchBase; class CLauncherAnimationBase; class CLauncherDismiss; class CLauncherLaunch; class CLegacyNonClientBackground; class CLegacyVisualCaptureRenderTargetProxy; class CLightMicaSystemBackdropVisual; class CLinearGradientLegacyMilBrushProxy; class CLivePreview; class CLivePreviewTimeline; class CLoginTransition; class CMILRefCountBase; class CMagnifier; class CMagnifierControl; class CMagnifierRenderTargetProxy; class CMatrixTransform3dProxy; class CMatrixTransformProxy; class CMeshGeometry2dProxy; class CMicaSystemBackdropVisual; class CNoAnimation; class CPPIWorkAreaResize; class CPanelAnimation; class CPenBarrelKeyVisual; class CPenContact; class CPenPressHoldVisual; class CPerMonitorDesktopThumbnail; class CPopInstruction; class CPressTapVisual; class CProjectedShadowScene; class CProjectionBorderManager; class CProjectionBorderVisual; class CProjectionBorderVisualShim; class CPushTransformInstruction; class CRectResourceProxy; class CRectangleGeometryProxy; class CRectangleInstruction; class CRedirectVisualProxy; class CRegion; class CRenderDataInstruction; class CRenderDataProxy; class CRenderDataVisual; class CReposition; class CResource; class CResourceProxy; class CRgnGeometryProxy; class CRotateTransformProxy; class CSSCrossFade; class CSWRListener; class CScaleTransformProxy; class CScreenshotFadeOut; class CSecondaryWindowRepresentation; class CShowPopup; class CShrinkPanel; class CSizeResourceProxy; class CSlide; class CSlideIn; class CSlideInAppBar; class CSlideInCharm; class CSlideInLong; class CSlideOut; class CSlideOutAppBar; class CSlideOutCharm; class CSlideOutLong; class CSolidColorLegacyMilBrushProxy; class CSolidRectangleInstruction; class CSolidRectangleVisual; class CSpriteVisual; class CStoryboard; class CStoryboardFactory; class CSystemBackdropVisual; class CTDBN; class CTabSwitch; class CTabletModeTransition; class CTetherVisual; class CThemeAnimationScheduleHelper; class CThumbnailAnimatedVisual; class CThumbnailData; class CThumbnailTransition; class CThumbnailVisual; class CTimeline; class CTimelineBase; class CTimer; class CTopLevelAtlasedRectsVisual; class CTopLevelWindow; class CTopLevelWindow3D; class CTouchContact; class CTouchDragVisual; class CTouchDragVisualHelper; class CTouchPressHoldVisual; class CTouchVisual; class CTrackingTooltip; class CTransform3dGroupProxy; class CTransformGroupProxy; class CTransitionVisualController; class CTransitionWindowSnapshot; class CTranslateTransformProxy; class CVirtualDesktopSwitch; class CVirtualDesktopThumbnail; class CVirtualDesktopThumbnailCVI; class CVisual; class CVisualGroupProxy; class CVisualProxy; class CVisualSurfaceProxy; class CVisualTargetProxy; class CWaitForService; class CWindowArrangementTransition; class CWindowBackgroundTreatmentVisual; class CWindowBorder; class CWindowClose; class CWindowData; class CWindowIconic; class CWindowList; class CWindowPropertyTracker; class CWindowRepresentation; class CWindowSnapshot; class CWindowTarget; class CapturedWindowRepresentation; class CloseHandle; class CoTaskMemFree; class ColorCache; class D2DMatrix; class D2DQuaternion; class D2DVector2; class D2DVector2const; class D2DVector3; class D2DVector3const; class D2D_MATRIX_3X2_F; class D2D_POINTANDSIZE_F; class D2D_POINTANDSIZE_L; class D2D_POINT_2F; class D2D_POINT_3F; class D2D_RECT_F; class D2D_RECT_U; class D2D_SIZE_F; class D2D_VECTOR_3F; class DISPLAYCONFIG_PATH_INFO; class DWM_CAPTURE_TOKEN; class DWM_WINDOW_CLOSE_EVENT_TOKEN; class DXGIOutputInfo; class DefaultHeap; class DesktopWorkAreaInfo; class Destroy; class DwmAnimationPrimitive; class DynArray; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class GpCC; class HBITMAP__; class HBRUSH__; class HCMNOTIFICATION__; class HDC__; class HICON__; class HINSTANCE__; class HKEY__; class HMONITOR__; class HRGN__; class HSTRING__; class HWND__; class IActivationFactory; class IAnimatedVisual; class IAnimationClockEventListener; class IAnimationListener; class IBitmapManager; class ID2D1Device; class ID2D1DeviceContext; class ID2D1Effect; class ID2D1Factory2; class ID2D1Multithread; class ID3D10Multithread; class ID3D11Device4; class IDCompositionAnimationTriggerPartner; class IDCompositionClip; class IDCompositionDesktopDevicePartner; class IDCompositionDesktopDevicePartner4; class IDCompositionDesktopDeviceRestricted; class IDCompositionEffect; class IDCompositionHolographicDevicePartner; class IDCompositionHolographicInteropTexture; class IDCompositionRemoteAppRenderTargetPartner; class IDCompositionRenderTargetPartner; class IDCompositionRenderTargetPartner2; class IDCompositionTarget; class IDCompositionTransform; class IDCompositionVisual; class IDCompositionVisual2; class IDCompositionVisualPartnerWinRTInterop; class IDCompositionVisualRestricted; class IDXGIAdapter; class IDXGIDevice1; class IDXGIFactory1; class IDXGIFactory4; class IDXGIFactory7; class IDisplayPathInterop; class IDwmChannel; class IDwmWindow; class IInspectable; class IRenderDataBuilder; class ISecondaryWindowRepresentationChangedListener; class ISoftwareCursorChangeListener; class IStream; class ITimerCallbackListener; class ITransitionAnimationVisualNative; class ITransitionStateNative; class ITransitionStateNativePrivate; class IUIAnimationManager2; class IUIAnimationPrimitiveInterpolation; class IUIAnimationStoryboard2; class IUIAnimationTransition2; class IUIAnimationTransitionFactory2; class IUIAnimationTransitionLibrary2; class IUIAnimationVariable2; class IUnknown; class IUserResizeVisualNative; class IWICBitmap; class IWICBitmapSource; class IWeakReference; class InterpolationParameters; class LeaveCriticalSection; class LivePreviewRequest; class LivePreviewResource; class LivePreviewVisual; class LivePreviewWindow; class MAGN_ADAPTERTEXTURES; class MAGN_FILTERLIST; class MAGN_UPDATE_TEXTURES_PARAM; class MILCMD_DWM_CAPTURE_METARENDERTARGET_BITSREPLY; class MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE; class MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW; class MILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST; class MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT; class MILCMD_DWM_REDIRECTION_ENDTRANSITION; class MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS; class MILCMD_DWM_REDIRECTION_GETGLOBALSTATE; class MILCMD_DWM_REDIRECTION_GETHMDSTATUS; class MILCMD_DWM_REDIRECTION_GETTITLEBARINFO; class MILCMD_DWM_REDIRECTION_HITTESTQUERY; class MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS; class MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW; class MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT; class MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT; class MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE; class MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE; class MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE; class MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE; class MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE; class MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE; class MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE; class MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL; class MILCMD_DWM_REDIRECTION_RENDERFLICK; class MILCMD_DWM_REDIRECTION_RENDERGESTURE; class MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS; class MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP; class MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL; class MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR; class MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT; class MILCMD_DWM_REDIRECTION_SHOWCONTACT; class MILCMD_DWM_REDIRECTION_STARTTRANSITION; class MILCMD_DWM_REDIRECTION_TETHERCONTACT; class MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP; class MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL; class MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL; class MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES; class MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION; class MILCMD_DWM_WINDOWATTRIBUTE; class MIL_MESSAGE; class MagnifierExperienceHelper; class Mesh2D; class MilColorTransform; class MilGradientStop; class NCADORNMENT_INFO; class NCPART_COLOR; class NineGridLayout; class RegCloseKey; class ReleaseSRWLockExclusive; class ResourceHelper; class RtlUnsubscribeWnfStateChangeNotification; class SCALINGINFO; class ScalingCompatLogging; class StoryboardInfo; class TA_TIMINGFUNCTION; class TA_TRANSFORM_2D; class TA_TRANSFORM_3D; class TA_TRANSFORM_CLIP; class TA_TRANSFORM_OPACITY; class TMilRect; class TMilRect_; class TOUCH_DRAG_POINT; class TaskbarAcrylic; class TipReportingInfo; class UDwmTrace; class VisualCollection; class VisualCollectionIterator; class WindowFrameLogging; class WindowFrameLoggingTelemetry; class WindowsAnimation; class _CM_NOTIFY_EVENT_DATA; class _CONTEXT; class _D3DCOLORVALUE; class _D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_const; class _D3DMATRIX; class _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO; class _DPI_INFORMATION; class _DWMCaptureWindowInformation; class _DWM_BLURBEHIND; class _DWM_THUMBNAIL_PROPERTIES; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_RECORD; class _GUID; class _LARGE_INTEGER; class _LIST_ENTRY; class _LUID; class _MARGINS; class _REMOTE_PORT_VIEW; class _RTL_CRITICAL_SECTION; class _RTL_GENERIC_TABLE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TP_WAIT; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __MIDL___MIDL_itf_UIAnimation_0000_0002_0003; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class iterator; class lambda_05cef1f6fdf474c9f3ed207deba0f73b; class lambda_8db0ce862824541f40dfb767113f1e28; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_f0b0058c35c91142d2603957657c1ded; class tagLOGFONTW; class tagPOINT; class tagRECT; class tagSIZE; class tagTITLEBARINFOEX; class thunk; class tson; class type; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace AnimationClockLoggingTelemetry { class AnimationClockStateChange; class BeginAnimationClock; class CreateAnimationClock; class EndAnimationClock; class GetCommitHandle; class TriggerClock; } 
namespace D2D1 { class Matrix4x4F; } 
namespace DispBrokerDesktop { class ISessionBrokerInstance; } 
namespace FastRegion { class CRegion; } 
namespace FastRegion { namespace Internal { class CRgnData; class CStripe; } } 
namespace Microsoft { namespace Internal { namespace UI { namespace Composition { namespace Effects { class GaussianBlurEffect; class IGaussianBlurEffect; } } } } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; } } } 
namespace RectUniqueness { class NotNeeded; class _CMILSurfaceRect_; class _CMilRectL_; } 
namespace ScalingCompatTelemetry { class CScalingCompatTelemetry; } 
namespace Udwm { namespace Transitions { namespace Private { namespace Tip { class _tip_ResponsiveScreenRotationAnimationTest; } } } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Devices { namespace Display { namespace Core { class DisplayManager; class DisplayManagerChangedEventArgs; class DisplayManagerDisabledEventArgs; class DisplayManagerEnabledEventArgs; class DisplayManagerPathsFailedOrInvalidatedEventArgs; class DisplayTarget; class IDisplayManager; class IDisplayManagerStatics; } } } } 
namespace Windows { namespace Graphics { namespace Effects { class IGraphicsEffect; class IGraphicsEffectD2D1Interop; class IGraphicsEffectSource; } } } 
namespace Windows { namespace Graphics { namespace Holographic { namespace Internal { class IHolographicDisplayMonitorManager; } } } } 
namespace Windows { namespace Mirage { class HolographicDriverDetectedWatcher; } } 
namespace Windows { namespace UI { class Color; } } 
namespace Windows { namespace UI { namespace Composition { class ICompositionBrush; class ICompositionDrawingSurfaceInterop; class ICompositionEffectFactory; class ICompositionEffectSourceParameterFactory; class ICompositionGraphicsDevice; class ICompositionLight; class ICompositionProjectedShadow; class ICompositionProjectedShadowReceiver; class ICompositionSurface; class ICompositor; class ICompositor2; class ICompositorInterop; class IExpCompositionProjectedShadow; class IInteropCompositorFactoryRestricted; class ISpriteVisual; class IVisual; class IVisual2; } } } 
namespace Windows { namespace UI { namespace Composition { namespace Internal { class ICompositorInternal; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { class IAcrylicBrushStaticsPrivate; } } } } 
namespace std { class _Atomic_padded; class _Func_base; class _Func_class; class _Hash_find_last_result; class _Iterator_base0; class _List_iterator; class _List_node; class _List_simple_types; class _List_unchecked_iterator; class _List_val; class _Simple_types; class _Tree_const_iterator; class _Tree_find_result; class _Tree_id; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Uhash_compare; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class allocator; class basic_string; class basic_string_view; class char_traits; class default_delete; class equal_to; class function; class hash; class invalid_argument; class logic_error; class nothrow_t; class nullptr_t; class optional; class pair; class shared_ptr; class unique_ptr; class unordered_map; class vector; class weak_ptr; } 
namespace stdext { class bad_alloc; class bad_array_new_length; class exception; } 
namespace tip2 { class details; class test_flag; class test_info; class test_requirement; class test_state; class test_watcher; class vector_nothrow; } 
namespace wil { class CallContextInfo; class FailureInfo; class ResultException; class StoredFailureInfo; class WNF_CHANGE_STAMP_STRUCT; class com_ptr_t; class err_returncode_policy; class event_watcher_t; class process_heap_deleter; class srwlock; class unique_any_t; class vector_range_nothrow; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class EnabledStateManager; class FeatureLogging; class FeatureStateManager; class IFailureCallback; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class delete_event_watcher_state; class delete_wnf_subscription_state; class event_watcher_state; class handle_null_resource_policy; class out_param_t; class pointer_range; class resource_policy; class unique_storage; class wnf_subscription_state; class wnf_subscription_state_base; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class ThreadLocalFailureInfo; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from uDWM.dll by Windissect. 189 member(s).
class CTopLevelWindow {
public:
    class WindowFrame;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z
    long AddProjectedShadowCaster(CProjectedShadowScene *, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z
    static void CalculateOutsideMargins(CWindowData *, unsigned int, _MARGINS *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ
    static void CleanupThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z
    long CloneForNewWindowData(CWindowData *, int, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTree@CTopLevelWindow@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z
    virtual long CloneVisualTree(CVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z
    long CloneVisualTreeForLivePreview(bool, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long Create(CWindowData *, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z
    static long CreateBitmapFromAtlas(void * const, int, _MARGINS *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z
    static long CreateBitmapsFromAtlasImageStrip(void * const, int, unsigned int, _MARGINS *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z
    static long CreateBitmapsFromAtlasImageStrip(void * const, int, unsigned int, _MARGINS *, CBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@CTopLevelWindow@@QEAAJPEAX@Z
    long CreateWindowTarget(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowWithNotify@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z
    static long CreateWindowWithNotify(CWindowData *, CTopLevelWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowTarget@CTopLevelWindow@@QEAAJXZ
    long DestroyWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z
    virtual bool DoHitTest(tagPOINT const &, CVisual * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ
    long EnsureClientAreaNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImages@CTopLevelWindow@@SAJXZ
    static long EnsureImages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRemoteAppTarget@CTopLevelWindow@@QEAAJPEAVCWindowData@@@Z
    long EnsureRemoteAppTarget(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ
    void ForceDisconnectClientArea();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceShowWindow@CTopLevelWindow@@QEAAX_N@Z
    void ForceShowWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z
    tagRECT GetActualWindowRect(bool, bool, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z
    tagRECT GetBorderRect(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanvasClientTransformRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetCanvasClientTransformRootVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanvasRootVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetCanvasRootVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z
    static int GetCurrentStyle(CWindowData const *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDpiAdjustedFloatCornerRadius@CTopLevelWindow@@QEAAMXZ
    float GetDpiAdjustedFloatCornerRadius();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFloatCornerRadiusForCurrentStyle@CTopLevelWindow@@QEAAMXZ
    float GetFloatCornerRadiusForCurrentStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z
    void GetFrameMargins(_MARGINS *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z
    static long GetLivePreviewVisual(CWindowData *, CTopLevelWindow * *, CWindowIconic * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLivePreviewWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z
    tagRECT GetLivePreviewWindowRect(bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ
    _MARGINS GetOutsideMarginsWithDropShadow() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z
    tagRECT GetResizeBorderOffsets(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualNoAddRef@CTopLevelWindow@@QEAAPEAVCVisual@@W4TLWRootVisualType@@@Z
    CVisual * GetRootVisualNoAddRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z
    void GetTitleBarInfo(tagTITLEBARINFOEX *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBorderVisualProxy@CTopLevelWindow@@QEAAPEAVCVisualProxy@@XZ
    CVisualProxy * GetWindowBorderVisualProxy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ
    CWindowData * GetWindowData() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ
    bool HasNonClientArea() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z
    static bool HasRenderedBorder(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasThinRenderedBorder@CTopLevelWindow@@SA_NI@Z
    static bool HasThinRenderedBorder(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestQuery@CTopLevelWindow@@QEAAXAEBUtagPOINT@@_NIPEAI@Z
    void HitTestQuery(tagPOINT const &, bool, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCloned@CTopLevelWindow@@QEAA_NXZ
    bool IsCloned();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMaximizedOrSnapped@CTopLevelWindow@@QEBA_NXZ
    bool IsMaximizedOrSnapped() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOffscreen@CTopLevelWindow@@QEAA_NXZ
    bool IsWindowOffscreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ
    void MakeIconicRepresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z
    long NcAdornmentInfoQuery(NCADORNMENT_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ
    void NotifyMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOfDirtyDCompThumbnail@CTopLevelWindow@@QEAAXXZ
    void NotifyOfDirtyDCompThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ
    void OnAccentPolicyUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ
    void OnAccentStateUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ
    void OnBlurBehindUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientAreaUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientAreaUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientGlassUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientGlassUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientMarginsUpdated@CTopLevelWindow@@QEAAXXZ
    void OnClientMarginsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClipUpdated@CTopLevelWindow@@QEAAJXZ
    long OnClipUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorizationUpdated@CTopLevelWindow@@QEAAXXZ
    void OnColorizationUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentBoundsUpdated@CTopLevelWindow@@QEAAXXZ
    void OnContentBoundsUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForceActiveWindowAppearanceUpdated@CTopLevelWindow@@QEAAXXZ
    void OnForceActiveWindowAppearanceUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGDISurfaceChange@CTopLevelWindow@@QEAAX_N@Z
    void OnGDISurfaceChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ
    virtual long OnGlobalTimeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconUpdated@CTopLevelWindow@@QEAAXXZ
    void OnIconUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsInWindowMove@CTopLevelWindow@@QEAAX_NAEBUtagRECT@@@Z
    void OnIsInWindowMove(bool, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOffsetUpdated@CTopLevelWindow@@QEAAXXZ
    void OnOffsetUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z
    void OnSettingsUpdated(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapshotCompleted@CTopLevelWindow@@QEAAXXZ
    void OnSnapshotCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapshotStart@CTopLevelWindow@@QEAAXXZ
    void OnSnapshotStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ
    void OnSourceConstantAlphaUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ
    void OnSystemBackdropUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z
    long OnThumbnailAdded(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnThumbnailRemoved@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z
    long OnThumbnailRemoved(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleUpdated@CTopLevelWindow@@QEAAXXZ
    void OnTitleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ
    void OnWindowScaleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ
    long OnWindowSizeUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ
    long OnWindowStyleUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSystemColors@CTopLevelWindow@@SAXXZ
    static void ReadSystemColors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadSystemMetrics@CTopLevelWindow@@SAJXZ
    static long ReadSystemMetrics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z
    long RegisterIndirectSwapChainRenderTarget(void *, bool, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z
    long ResyncTitleBackgroundColorForClonedWindow(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@PEAVCWindowData@@_N@Z
    long SendTopLevelWindowCommand(HWND__*, CWindowData *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeFromDDA@CTopLevelWindow@@QEAAJ_N@Z
    long SetExcludeFromDDA(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z
    long SetHolographic(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z
    long SetLivePreviewAlpha(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassiveUpdateMode@CTopLevelWindow@@QEAAJ_N@Z
    long SetPassiveUpdateMode(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z
    void SetShadowOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z
    void SetSuppressBorderUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualProtectContent@CTopLevelWindow@@QEAAJ_N@Z
    long SetVisualProtectContent(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z
    void SetWindowOffscreen(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z
    long ShowWindow(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ
    void StartIconicAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z
    long StartLivePreviewAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ
    void StopIconicAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ
    void StopLivePreviewAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z
    long UnregisterIndirectSwapchainRenderTarget(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z
    long UpdateAccent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentBlurRect@CTopLevelWindow@@QEAAXAEBUtagRECT@@@Z
    void UpdateAccentBlurRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z
    virtual long UpdateLayout(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetBounds@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetOpacity@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRemoteAppRenderTargetRoot@CTopLevelWindow@@QEAAJXZ
    long UpdateRemoteAppRenderTargetRoot();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z
    long UpdateTitle(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ
    long UpdateWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateVisual@CTopLevelWindow@@UEAAJXZ
    virtual long ValidateVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustNonClientBackgroundTreePosition@CTopLevelWindow@@AEAAJXZ
    long AdjustNonClientBackgroundTreePosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z
    void ApplyCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z
    long ApplyMaximizedClip(HRGN__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTopLevelWindow@@AEAA@PEAVCWindowData@@_N@Z
    CTopLevelWindow(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateBackgroundType@CTopLevelWindow@@AEBA?AW4BackgroundType@1@XZ
    int CalculateBackgroundType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeMouseOver@CTopLevelWindow@@AEAAXPEAVCVisual@@@Z
    void ChangeMouseOver(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z
    WindissectOpaque * ChooseWindowFrame(unsigned int, bool) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeWindowFrameMargins@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z
    void ComputeWindowFrameMargins(_MARGINS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z
    static long CreateGlyphsFromAtlas(void * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ
    long CreateHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z
    static long CreateNCButtons(void * const, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeBorderMustBeOpaque@CTopLevelWindow@@AEAAHXZ
    int EdgeBorderMustBeOpaque();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z
    long EnsureNonClientAreaButton(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ
    static long EnsureWindowFrames();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z
    static CBitmapSource * GetAtlasImageFromTheme(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ
    int GetBorderStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetButtonHeightAndOffset@CTopLevelWindow@@AEBAXPEAH0@Z
    void GetButtonHeightAndOffset(int *, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ
    unsigned long GetCaptionColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z
    static float GetCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ
    WindissectOpaque GetCurrentDefaultColorizationFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveCornerStyle@CTopLevelWindow@@AEAA?AW4CORNER_STYLE@@XZ
    int GetEffectiveCornerStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveSystemBackdropType@CTopLevelWindow@@AEBA?AW4SYSTEMBACKDROP_TYPE@@XZ
    int GetEffectiveSystemBackdropType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameMaximizedClipMargins@CTopLevelWindow@@AEAA?AU_MARGINS@@XZ
    _MARGINS GetFrameMaximizedClipMargins();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ
    static WindissectOpaque * GetInactiveFrame();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorRect@CTopLevelWindow@@AEAA_NPEBUtagRECT@@PEAU2@@Z
    bool GetMonitorRect(tagRECT const *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z
    static long GetNCAreaHelper(void *, int const *, int const *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z
    static long GetNCAreaHorizontalStripHelper(void *, int, int, int, int, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ
    float GetRadiusFromCornerStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ
    _D3DCOLORVALUE GetRoundedBorderColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShadowStyle@CTopLevelWindow@@AEAA?AW4ShadowStyle@CWindowBorder@@XZ
    int GetShadowStyle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ
    unsigned long GetSolidColorCaptionColor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitlebarHeight@CTopLevelWindow@@AEBAHXZ
    int GetTitlebarHeight() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ
    unsigned long GetTransparentGradientColorForAccent() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z
    static CBitmapSource * GetWindowFramePart(WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimation@CTopLevelWindow@@AEAA_NXZ
    bool HasAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasCaptionAreaColorOverride@CTopLevelWindow@@AEBA_NXZ
    bool HasCaptionAreaColorOverride() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTopLevelWindow@@EEAAJXZ
    virtual long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z
    long InitializeVisualTreeClone(CTopLevelWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z
    static bool IsGlassSheetNCAreaPart(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z
    static bool IsShadowNCAreaPart(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSheetOfGlass@CTopLevelWindow@@AEBA_NXZ
    bool IsSheetOfGlass() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ
    long LivePreviewAnimation_Animated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ
    long LivePreviewAnimation_Flipped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z
    static bool NeedsCorrectionScaleForUniformSpaceWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ
    void ReleaseHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeVisualToTitlebar@CTopLevelWindow@@AEAAJPEAVCVisual@@@Z
    long ResizeVisualToTitlebar(CVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ
    long SendBoundsToSwapchainTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z
    static void SetSizingMargins(WindissectOpaque *, WindissectOpaque *, unsigned int, _MARGINS);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSwapchainTarget@CTopLevelWindow@@AEAAJPEAVCIndirectSwapchainRenderTargetProxy@@_N@Z
    long SetSwapchainTarget(CIndirectSwapchainRenderTargetProxy *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ
    bool ShouldHitTest() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformHitTestPointForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@PEAUtagPOINT@@@Z
    void TransformHitTestPointForUniformSpaceWindow(CWindowData *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ
    bool TreatAsActiveWindow() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z
    long UpdateButtonVisuals(WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaptionAccentColor@CTopLevelWindow@@AEAAJXZ
    long UpdateCaptionAccentColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z
    void UpdateCapturedButton(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ
    long UpdateClientAreaBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ
    long UpdateClientAreaMaximizedClip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ
    long UpdateClientBlur();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ
    long UpdateColorizationColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ
    void UpdateDCompVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ
    long UpdateGDISurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ
    long UpdateHolographicSlate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHolographicSlateBounds@CTopLevelWindow@@AEAAJXZ
    long UpdateHolographicSlateBounds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcon@CTopLevelWindow@@AEAAJXZ
    long UpdateIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ
    long UpdateLivePreviewAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMargins@CTopLevelWindow@@AEAA_NXZ
    bool UpdateMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z
    long UpdateMarginsAndStyle(bool, bool, bool, bool *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ
    bool UpdateMarginsDependentOnStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaBackground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z
    long UpdateNCAreaButton(int, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaGeometry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ
    long UpdateNCAreaPositionsAndSizes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ
    long UpdatePinnedParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ
    bool UpdateStyle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ
    long UpdateSystemBackdropVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z
    long UpdateText(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitle@CTopLevelWindow@@AEAAJXZ
    long UpdateTitle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ
    void UpdateWindowScale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ
    long UpdateWindowVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMarginsVisibleOutside@CTopLevelWindow@@AEBAXPEAU_MARGINS@@@Z
    void _GetMarginsVisibleOutside(_MARGINS *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRightFrameThickness@CTopLevelWindow@@AEAAHXZ
    int _GetRightFrameThickness();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z
    static WindissectOpaque * s_ChooseWindowFrameFromStyle(unsigned int, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTopLevelWindow@@EEAA@XZ
    virtual ~CTopLevelWindow();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `StartLivePreviewAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `HasAnimation` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CloneVisualTreeForLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `CloneVisualTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetInactiveFrame` | `struct CTopLevelWindow::WindowFrame *` | `Accessor` | `Pdb` | No (PDB) |
| `IsGlassSheetNCAreaPart` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CreateGlyphsFromAtlas` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShouldHitTest` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetWindowFramePart` | `class CBitmapSource *` | `Accessor` | `Pdb` | No (PDB) |
| `IsShadowNCAreaPart` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CreateBitmapsFromAtlasImageStrip` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetAtlasImageFromTheme` | `class CBitmapSource *` | `Accessor` | `Pdb` | No (PDB) |
| `CreateBitmapsFromAtlasImageStrip` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnOffsetUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `ValidateVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateMarginsAndStyle` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowScale` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateClientAreaBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateDCompVisuals` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateLivePreviewAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureClientAreaNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateRemoteAppRenderTargetBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateHolographicSlateBounds` | `long` | `Method` | `Pdb` | No (PDB) |
| `SendBoundsToSwapchainTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateNCAreaBackground` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateNCAreaPositionsAndSizes` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetButtonHeightAndOffset` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `_GetMarginsVisibleOutside` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdatePinnedParts` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowVisuals` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateMargins` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateMarginsDependentOnStyle` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CalculateOutsideMargins` | `void` | `Method` | `Pdb` | No (PDB) |
| `s_ChooseWindowFrameFromStyle` | `struct CTopLevelWindow::WindowFrame *` | `Method` | `Pdb` | No (PDB) |
| `HasThinRenderedBorder` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `HasRenderedBorder` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateStyle` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentStyle` | `enum NCAREA_FLAGS` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateColorizationColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `ChooseWindowFrame` | `struct CTopLevelWindow::WindowFrame *` | `Method` | `Pdb` | No (PDB) |
| `GetCurrentDefaultColorizationFlags` | `struct TMILFlagsEnum<enum ColorizationFlags::FlagsEnum>` | `Accessor` | `Pdb` | No (PDB) |
| `IsSheetOfGlass` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateHolographicSlate` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalculateBackgroundType` | `enum CTopLevelWindow::BackgroundType` | `Method` | `Pdb` | No (PDB) |
| `UpdateSystemBackdropVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetEffectiveSystemBackdropType` | `enum SYSTEMBACKDROP_TYPE` | `Accessor` | `Pdb` | No (PDB) |
| `GetEffectiveCornerStyle` | `enum CORNER_STYLE` | `Accessor` | `Pdb` | No (PDB) |
| `ReleaseHolographicSlate` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasCaptionAreaColorOverride` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetRadiusFromCornerStyle` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateAccent` | `long` | `Method` | `Pdb` | No (PDB) |
| `~CTopLevelWindow` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `StopLivePreviewAnimation` | `void` | `Method` | `Pdb` | No (PDB) |
| `UnregisterIndirectSwapchainRenderTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopIconicAnimation` | `void` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `GetShadowStyle` | `enum CWindowBorder::ShadowStyle` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateNCAreaGeometry` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApplyMaximizedClip` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateWindowWithNotify` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create` | `long` | `Method` | `Pdb` | No (PDB) |
| `CTopLevelWindow` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `SendTopLevelWindowCommand` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureRemoteAppTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `CloneForNewWindowData` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateButtonVisuals` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureNonClientAreaButton` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCaptionColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetRoundedBorderColor` | `struct _D3DCOLORVALUE` | `Accessor` | `Pdb` | No (PDB) |
| `TreatAsActiveWindow` | `bool` | `Method` | `Pdb` | No (PDB) |
| `GetSolidColorCaptionColor` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `NotifyOfDirtyDCompThumbnail` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetFrameMargins` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `InitializeVisualTreeClone` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestQuery` | `void` | `Method` | `Pdb` | No (PDB) |
| `NotifyMouseLeave` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateCapturedButton` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoHitTest` | `bool` | `Method` | `Pdb` | No (PDB) |
| `TransformHitTestPointForUniformSpaceWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplyCorrectionScaleForUniformSpaceWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `NeedsCorrectionScaleForUniformSpaceWindow` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ChangeMouseOver` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetTitleBarInfo` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `NcAdornmentInfoQuery` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetRootVisualNoAddRef` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `ForceShowWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnGDISurfaceChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnContentBoundsUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnAccentPolicyUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnIconUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnClientGlassUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnBlurBehindUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnWindowScaleUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnColorizationUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnTitleUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSystemBackdropUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSourceConstantAlphaUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `ForceDisconnectClientArea` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnClientAreaUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnWindowStyleUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGlobalTimeUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateRemoteAppRenderTargetOpacity` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnSettingsUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnClipUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetLivePreviewWindowRect` | `struct tagRECT` | `Accessor` | `Pdb` | No (PDB) |
| `GetActualWindowRect` | `struct tagRECT` | `Accessor` | `Pdb` | No (PDB) |
| `GetBorderRect` | `struct tagRECT` | `Accessor` | `Pdb` | No (PDB) |
| `LivePreviewAnimation_Animated` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetLivePreviewAlpha` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateText` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateClientBlur` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnClientMarginsUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetLivePreviewVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `MakeIconicRepresentation` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetWindowOffscreen` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `OnSnapshotStart` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindowData` | `class CWindowData *` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateIcon` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureImages` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReadSystemMetrics` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureWindowFrames` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReadSystemColors` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetNCAreaHelper` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNCAreaHorizontalStripHelper` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CreateNCButtons` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetSizingMargins` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `CreateBitmapFromAtlas` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateCaptionAccentColor` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddProjectedShadowCaster` | `long` | `Method` | `Pdb` | No (PDB) |
| `EdgeBorderMustBeOpaque` | `int` | `Method` | `Pdb` | No (PDB) |
| `AdjustNonClientBackgroundTreePosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateNCAreaButton` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateClientAreaMaximizedClip` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateGDISurface` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateTitle` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetMonitorRect` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `_GetRightFrameThickness` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetPassiveUpdateMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFirstNonNull<class CSpriteVisual, class CAccent, class CSystemBackdropVisual>` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `SetExcludeFromDDA` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateAccentBlurRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `LivePreviewAnimation_Flipped` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetOutsideMarginsWithDropShadow` | `struct _MARGINS` | `Accessor` | `Pdb` | No (PDB) |
| `SetSuppressBorderUpdates` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetTitlebarHeight` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetBorderStyle` | `enum CWindowBorder::BorderStyle` | `Accessor` | `Pdb` | No (PDB) |
| `SetShadowOpacity` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `ResyncTitleBackgroundColorForClonedWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `CleanupThemeStatics` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetHolographic` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CountParticipatingInClone<class CSystemBackdropVisual, class CAccent, class CSpriteVisual, class CLegacyNonClientBackground, class CCanvasVisual>` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `GetDpiAdjustedFloatCornerRadius` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `IsCloned` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetFirstNonNull<class CLegacyNonClientBackground, class CSpriteVisual, class CAccent, class CSystemBackdropVisual>` | `class CVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `OnSnapshotCompleted` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasNonClientArea` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateRemoteAppRenderTargetRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateTitle` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnIsInWindowMove` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetCanvasRootVisualProxy` | `class CVisualProxy *` | `Accessor` | `Pdb` | No (PDB) |
| `SetVisualProtectContent` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `OnAccentStateUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsWindowOffscreen` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `OnWindowSizeUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `ResizeVisualToTitlebar` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnThumbnailAdded` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnForceActiveWindowAppearanceUpdated` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnThumbnailRemoved` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCorrectionScaleForUniformSpaceWindow` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `GetFrameMaximizedClipMargins` | `struct _MARGINS` | `Accessor` | `Pdb` | No (PDB) |
| `ComputeWindowFrameMargins` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateHolographicSlate` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateWindowTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroyWindowTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCanvasClientTransformRootVisualProxy` | `class CVisualProxy *` | `Accessor` | `Pdb` | No (PDB) |
| `GetFloatCornerRadiusForCurrentStyle` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `GetResizeBorderOffsets` | `struct tagRECT` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransparentGradientColorForAccent` | `unsigned long` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowBorderVisualProxy` | `class CVisualProxy *` | `Accessor` | `Pdb` | No (PDB) |
| `IsMaximizedOrSnapped` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `OnGraphicsDeviceLost` | `void` | `Method` | `Pdb` | No (PDB) |
| `RegisterIndirectSwapChainRenderTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetSwapchainTarget` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `StartIconicAnimation` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateLayout` | `long` | `Method` | `Pdb` | No (PDB) |
