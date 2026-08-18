# `global` :: `CCompositor`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `uDWM.dll`. Total members: **107**.

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

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `NotifyDeferralState` | `long` | `Method` | `Pdb` | No (PDB) |
| `NotifyDirty` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CVisualTargetProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateAtlasedRectsMeshProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateAtlasedRectsGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CBaseGeometryProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CVisualProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CEffectGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CAtlasedRectsGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CVisualProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRenderDataProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CContainerVisualProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRgnGeometryProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateContainerVisualProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateImageLegacyMilBrushProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateCachedVisualImageProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRedirectVisualProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CommitDwmChannel` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRenderDataProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRenderDataBuilder` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateScaleTransformProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateEffectGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateVisualProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRectangleGeometryProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateCombinedGeometryProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateBitmapSourceProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateMeshGeometry2dProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateGeometry2dGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `SynchronizedCommit` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create` | `long` | `Method` | `Pdb` | No (PDB) |
| `CCompositor` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CCombinedGeometryProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CGeometry2dGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRgnGeometryProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRectangleGeometryProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateSolidColorLegacyMilBrushProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CLinearGradientLegacyMilBrushProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CSolidColorLegacyMilBrushProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CImageLegacyMilBrushProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CBitmapSourceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CCachedVisualImageProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `SyncDesktopCaptureBits` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRectResourceProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CTransformGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CTranslateTransformProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRotateTransformProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CScaleTransformProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CMatrixTransformProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateVisualProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CAtlasedRectsMeshProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsRemoteTreeEnabled` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ForceRender` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRedirectVisualProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CRectResourceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CSizeResourceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CAnimationTriggerProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CMeshGeometry2dProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `RoundTripRequest` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateMatrixTransformProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CDoubleResourceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CVisualSurfaceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateGeometryProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `PartitionToggleHolographicSuspension` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CLegacyVisualCaptureRenderTargetProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `PartitionSwitchRemotingMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CColorTransformResourceProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateSizeResourceProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `Release` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `CreateProxy<class CAnimationProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddRef` | `unsigned long` | `Refcount` | `Pdb` | No (PDB) |
| `CreateVisualTargetProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CoinitializeWrapper` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateLinearGradientLegacyMilBrushProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateColorTransformResourceProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateAnimationProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateDoubleResourceProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateAnimationTriggerProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateLegacyVisualCaptureRenderTargetProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateVisualSurfaceProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CGaussianBlurEffectProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CIndirectSwapchainRenderTargetProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CMagnifierRenderTargetProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CMatrixTransform3dProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CTransform3dGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxy<class CVisualGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CCaptureControllerProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CHolographicInteropTextureProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateProxyFromSharedHandle<class CVisualGroupProxy>` | `long` | `Method` | `Pdb` | No (PDB) |
| `~CCompositor` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `[thunk]: protected: virtual void *` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `CreateCaptureControllerProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateGaussianBlurEffectProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateHolographicInteropTextureProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateIndirectSwapchainRenderTargetProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateMagnifierRenderTargetProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateMatrixTransform3dProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRotateTransformProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateTransform3dGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateTransformGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateTranslateTransformProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateVisualGroupProxy` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateVisualGroupProxyFromSharedHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryInterface` | `long` | `Refcount` | `Pdb` | No (PDB) |
| `Shutdown` | `void` | `Method` | `Pdb` | No (PDB) |
