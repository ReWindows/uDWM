# `global` :: `CCaptureManager`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `uDWM.dll`. Total members: **64**.

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

// Reconstructed from uDWM.dll by Windissect. 64 member(s).
class CCaptureManager {
public:
    class CAPTURE_DISPLAY_MAP_ENTRY;
    class CAPTURE_FILTERED_DISPLAY_MAP_ENTRY;
    class CAPTURE_FILTERED_WINDOW;
    class CAPTURE_WINDOW_MAP_ENTRY;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long AddRemoveWindowToFilteredDisplayCapture(HWND__*, int, DWM_CAPTURE_TOKEN const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCaptureManager@@QEAA@XZ
    CCaptureManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoParentingChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnAutoParentingChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z
    virtual long OnProcessDisconnected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowClosed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowMinimized(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowMonitorChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowOffsetUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowRestored(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowSizeUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowStyleChanged(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowTransformUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowVisibilityUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z
    virtual long OnWindowZOrderUpdated(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupDisplayCapture(HMONITOR__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupFilteredDisplayCapture(HMONITOR__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupWindowCapture@CCaptureManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long SetupWindowCapture(HWND__*, void *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartFilteredDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StartWindowCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCapturesForWindow@CCaptureManager@@UEAAJPEAUHWND__@@@Z
    virtual long StopCapturesForWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopFilteredDisplayCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z
    virtual long StopWindowCapture(DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCaptureControllerPropertiesFromDisplays@CCaptureManager@@UEAAJXZ
    virtual long UpdateCaptureControllerPropertiesFromDisplays();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateDisplayCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFilteredDisplayCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateFilteredDisplayCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateProxyWindowForCapture@CCaptureManager@@UEAAJPEAUHWND__@@00@Z
    virtual long UpdateProxyWindowForCapture(HWND__*, HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowCaptureBorder@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@H@Z
    virtual long UpdateWindowCaptureBorder(DWM_CAPTURE_TOKEN const &, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z
    long _AddDisplayCaptureEntry(HMONITOR__*, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddFilteredDisplayCaptureEntry@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@PEAVCContainerVisualProxy@@@Z
    long _AddFilteredDisplayCaptureEntry(HMONITOR__*, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &, CContainerVisualProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _AddProjectionBorderForAllDisplays(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _AddProjectionBorderForDisplay(HMONITOR__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z
    long _AddRemoveWindowToFilteredDisplayCapture(HWND__*, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z
    long _AddWindowCaptureEntry(HWND__*, CapturedWindowRepresentation *, CCaptureControllerProxy *, DWM_CAPTURE_TOKEN const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z
    long _AddWindowToFilteredCapture(WindissectOpaque *, WindissectOpaque &&, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureCursorStateForCapture@CCaptureManager@@AEAAXXZ
    void _EnsureCursorStateForCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluateWindowForWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z
    long _EvaluateWindowForWindowCaptures(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCapturedItemRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAVCVisualProxy@@PEAPEAVCapturedWindowRepresentation@@1@Z
    long _GetCapturedItemRootVisual(HWND__*, CVisualProxy * *, CapturedWindowRepresentation * *, CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultSDRBoostForWindow@CCaptureManager@@AEAAJPEAVCWindowData@@PEAM@Z
    long _GetDefaultSDRBoostForWindow(CWindowData *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDesktopRootVisual@CCaptureManager@@AEAAJPEAPEAVCVisualProxy@@@Z
    long _GetDesktopRootVisual(CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z
    long _GetHostWindowHandle(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetHostWindowHandleForProxyWindow@CCaptureManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z
    HWND__* _GetHostWindowHandleForProxyWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetProxyWindowHandle@CCaptureManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z
    long _GetProxyWindowHandle(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWindowRootVisual@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAPEAVCVisualProxy@@@Z
    long _GetWindowRootVisual(HWND__*, bool, CVisualProxy * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasOngoingCapture@CCaptureManager@@AEAA_NPEAUHWND__@@@Z
    bool _HasOngoingCapture(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z
    long _RemoveSecondaryWindowFromWindowCaptures(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendBoundsToCaptureControllerFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _SendBoundsToCaptureControllerFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendBoundsToCaptureControllerFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z
    long _SendBoundsToCaptureControllerFromWindow(HWND__*, bool, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCaptureControllerContentOffset@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z
    long _SetCaptureControllerContentOffset(CCaptureControllerProxy *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetCaptureControllerOffsetTransform@CCaptureManager@@AEAAJPEAVCCaptureControllerProxy@@HHM@Z
    long _SetCaptureControllerOffsetTransform(CCaptureControllerProxy *, int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProjectionBorderForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _SetProjectionBorderForWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetScreenCaptureForWindow@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _SetScreenCaptureForWindow(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerCaptureState@CCaptureManager@@AEAAJPEAUHWND__@@_N@Z
    long _UpdateCaptureControllerCaptureState(HWND__*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerContentOffsetFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerContentOffsetFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerContentOffsetFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerContentOffsetFromWindow(HWND__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerDefaultSDRBoost(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z
    long _UpdateCaptureControllerDefaultSDRBoost(HWND__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerDefaultSDRBoostFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerSize@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerSize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z
    long _UpdateCaptureControllerTransform(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransformFromDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerTransformFromDisplay(HMONITOR__*, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCaptureControllerTransformFromWindow@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAVCCaptureControllerProxy@@@Z
    long _UpdateCaptureControllerTransformFromWindow(HWND__*, bool, CCaptureControllerProxy *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDisplayCaptureControllerProperties@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z
    long _UpdateDisplayCaptureControllerProperties(WindissectOpaque *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `AddRemoveWindowToFilteredDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnAutoParentingChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnProcessDisconnected` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowClosed` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowMinimized` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowMonitorChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowOffsetUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowRestored` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowSizeUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowStyleChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowTransformUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowVisibilityUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowZOrderUpdated` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetupDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetupFilteredDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetupWindowCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartFilteredDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartWindowCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopCapturesForWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopFilteredDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopWindowCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateCaptureControllerPropertiesFromDisplays` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateDisplayCaptureBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateFilteredDisplayCaptureBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateProxyWindowForCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowCaptureBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddDisplayCaptureEntry` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddFilteredDisplayCaptureEntry` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddProjectionBorderForAllDisplays` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddProjectionBorderForDisplay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddRemoveWindowToFilteredDisplayCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddWindowCaptureEntry` | `long` | `Method` | `Pdb` | No (PDB) |
| `_AddWindowToFilteredCapture` | `long` | `Method` | `Pdb` | No (PDB) |
| `_EnsureCursorStateForCapture` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EvaluateWindowForWindowCaptures` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetCapturedItemRootVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetDefaultSDRBoostForWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetDesktopRootVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetHostWindowHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetHostWindowHandleForProxyWindow` | `struct HWND__*` | `Method` | `Pdb` | No (PDB) |
| `_GetProxyWindowHandle` | `long` | `Method` | `Pdb` | No (PDB) |
| `_GetWindowRootVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `_HasOngoingCapture` | `bool` | `Method` | `Pdb` | No (PDB) |
| `_RemoveSecondaryWindowFromWindowCaptures` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SendBoundsToCaptureControllerFromDisplay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SendBoundsToCaptureControllerFromWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetCaptureControllerContentOffset` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetCaptureControllerOffsetTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetProjectionBorderForWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_SetScreenCaptureForWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerCaptureState` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerContentOffsetFromDisplay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerContentOffsetFromWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerDefaultSDRBoost` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerDefaultSDRBoost` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerDefaultSDRBoostFromDisplay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerTransform` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerTransformFromDisplay` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateCaptureControllerTransformFromWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `_UpdateDisplayCaptureControllerProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `CCaptureManager` | `void` | `Ctor` | `Pdb` | No (PDB) |
