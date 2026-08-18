# `global` :: `CWindowList`

**Category:** [Controls & Widgets](./README.md)

Reconstructed from `uDWM.dll`. Total members: **216**.

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

// Reconstructed from uDWM.dll by Windissect. 216 member(s).
class CWindowList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long AccentPolicyChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ActivationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z
    long AddProjectedShadowCaster(HWND__*, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlphaChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long AlphaChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BlurBehindChange@CWindowList@@UEAAJPEAUIDwmWindow@@PEBU_DWM_BLURBEHIND@@@Z
    virtual long BlurBehindChange(IDwmWindow *, _DWM_BLURBEHIND const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z
    long BringDesktopToFront(CContainerVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z
    long BringDesktopToFront(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowList@@QEAA@XZ
    CWindowList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureDesktop@CWindowList@@UEAAJHHHH_KW4DXGI_FORMAT@@PEAPEAX@Z
    virtual long CaptureDesktop(int, int, int, int, uint64_t, int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureWindow@CWindowList@@UEAAJPEAUIDwmWindow@@MHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z
    virtual long CaptureWindow(IDwmWindow *, float, int, int, int, int, uint64_t, int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeCursorSynchronization@CWindowList@@QEAAJW4CursorSynchronization@@@Z
    long ChangeCursorSynchronization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ChildContentChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupThemeStatics@CWindowList@@QEAAXXZ
    void CleanupThemeStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllSnapshotRepresentations@CWindowList@@QEAAJXZ
    long ClearAllSnapshotRepresentations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClientGlassChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClientMarginsChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ClipChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z
    virtual long CloakChange(IDwmWindow *, IDwmWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ContentProtectionChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@CWindowList@@QEAAJXZ
    long CreateCursorVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z
    void CreateOrDestroyDesktopWindowReplacementForDesktops(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long CreateSprite(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long CreateWindow(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z
    virtual long CreateWindowTarget(IDwmWindow *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z
    virtual long DesktopThumbnailChange(IDwmWindow *, tagRECT, tagRECT, unsigned char, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPendingSprites@CWindowList@@QEAAXXZ
    void DestroyPendingSprites();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroySprite(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroyWindow(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyWindowTarget@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DestroyWindowTarget(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisallowPeekChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long DisallowPeekChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ
    void DismissCurrentTouchResizeHighlight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z
    CWindowData * FindTabWindowData(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindThumbnailData@CWindowList@@QEAAPEAVCThumbnailData@@T_LARGE_INTEGER@@@Z
    CThumbnailData * FindThumbnailData(_LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z
    CWindowData * FindWindowDataByHwnd(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceActiveWindowAppearanceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceActiveWindowAppearanceChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceConnectClientNode(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceDisconnectClientNode(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ForceIconicRepresentationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateScene@CWindowList@@QEAAJXZ
    long ForceUpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long FrameMarginsChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long FreezeRepresentationChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long GDISurfaceChange(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z
    CGlobalLightSet * GetGlobalLightSetForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z
    CTopLevelWindow * GetLowestProjectedShadowCasterWindowForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z
    CMagnifierControl * GetMagnifierControlForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumOwnees@CWindowList@@UEAAIPEAUIDwmWindow@@@Z
    virtual unsigned int GetNumOwnees(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K_N@Z
    CContainerVisual * GetOverlayRootVisualForDesktop(uint64_t, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwneeAtIndex@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@I@Z
    virtual IDwmWindow * GetOwneeAtIndex(IDwmWindow *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@CWindowList@@UEAAPEAUIDwmWindow@@PEAU2@@Z
    virtual IDwmWindow * GetOwner(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z
    void GetPhysicalPtFromLogical(CWindowData *, tagRECT &, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z
    long GetProjectedShadowSceneForDesktop(uint64_t, bool, CProjectedShadowScene * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z
    CContainerVisual * GetRenderTargetRootVisualForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z
    CRenderDataVisual * GetRootVisualForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z
    HWND__* GetShellWindowForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z
    void GetSyncedWindowData(IDwmWindow *, bool, CWindowData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAXPEAUHWND__@@PEAPEAVCWindowData@@@Z
    void GetSyncedWindowDataByHwnd(HWND__*, CWindowData * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CWindowList@@UEAAPEBGPEAUIDwmWindow@@@Z
    virtual unsigned short const * GetText(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowBounds@CWindowList@@UEAAJPEAUHWND__@@PEAUtagRECT@@@Z
    virtual long GetWindowBounds(HWND__*, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z
    _LIST_ENTRY * GetWindowListForDesktop(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowListForDesktopCanFail@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z
    _LIST_ENTRY * GetWindowListForDesktopCanFail(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GhostChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long GhostChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleScreenRotation@CWindowList@@QEAAJHH@Z
    long HandleScreenRotation(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long HasIconicBitmapChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWindowList@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long IsCursorChange(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInWindowMoveChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    virtual long IsInWindowMoveChange(IDwmWindow *, bool, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z
    virtual long IsInWindowResizeChange(IDwmWindow *, bool, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteAppMode@CWindowList@@UEAA_NXZ
    virtual bool IsRemoteAppMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenRotating@CWindowList@@QEAA_NXZ
    bool IsScreenRotating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LivePreviewExcludeChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long LivePreviewExcludeChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CWindowList@@UEAAXXZ
    virtual void Lock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long MonitorChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long MoveSize(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ
    long MoveTransitionAndTouchVisualToFront();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void OnContentBoundsChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisableMoveSizeFeedbackChanged@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long OnDisableMoveSizeFeedbackChanged(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGraphicsDeviceLost@CWindowList@@QEAAXXZ
    void OnGraphicsDeviceLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z
    void OnPositionChange(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessDisconnected@CWindowList@@UEAAJK@Z
    virtual long OnProcessDisconnected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z
    long OnSizeChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void OnWindowDataDestroyed(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z
    virtual long OwnerChange(IDwmWindow *, IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z
    virtual long ProcessAsyncDwmMessage(int, void const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z
    virtual long ProcessBackChannelMessage(MIL_MESSAGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z
    virtual long ProcessSyncDwmMessage(int, void *, unsigned int, bool, unsigned long, _REMOTE_PORT_VIEW const *, long *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z
    long QueueDestroySprite(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RAILModeChanged@CWindowList@@UEAAXXZ
    virtual void RAILModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ
    void RecreateDesktopWindowReplacementForDesktops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@W4ACCENT_STATE@@@Z
    void RegisterAccentState(CWindowData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z
    long RegisterForSoftwareCursorChangeNotification(ISoftwareCursorChangeListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z
    virtual long RegisterIndirectSwapchainRenderTargetForWindow(IDwmWindow *, void *, bool, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@PEAX@Z
    virtual long RegisterSharedThumbnailVisual(HWND__*, HWND__*, int, int, _DWM_THUMBNAIL_PROPERTIES const &, _LARGE_INTEGER, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z
    virtual long RegisterSharedVirtualDesktopVisual(HWND__*, _LARGE_INTEGER, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z
    long ReleaseAcrylicSheetAndOwnerIfNotUsed(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ReparentingFromDesktop(IDwmWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlurredWallpaperSurface@CWindowList@@UEAAJPEAXPEBUtagRECT@@@Z
    virtual long SetBlurredWallpaperSurface(void *, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z
    long SetCommitHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCornerStyle@CWindowList@@UEAAJPEAUIDwmWindow@@W4CORNER_STYLE@@@Z
    virtual long SetCornerStyle(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCursorDesktopVisibility@CWindowList@@QEAAJH@Z
    long SetCursorDesktopVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExcludeFromDDA@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetExcludeFromDDA(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetHolographic(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPartColor@CWindowList@@UEAAJPEAUIDwmWindow@@PEBUNCPART_COLOR@@@Z
    virtual long SetPartColor(IDwmWindow *, NCPART_COLOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetPassiveUpdateMode(IDwmWindow *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteAppPolicy@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWM_REMOTEAPP_POLICY@@@Z
    virtual long SetRemoteAppPolicy(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResizeCompSyncObject@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX@Z
    virtual long SetResizeCompSyncObject(IDwmWindow *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSystemBackdropType@CWindowList@@UEAAJPEAUIDwmWindow@@W4SYSTEMBACKDROP_TYPE@@@Z
    virtual long SetSystemBackdropType(IDwmWindow *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseDarkModeColors@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z
    virtual long SetUseDarkModeColors(IDwmWindow *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z
    long ShowHide(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ShowHide(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z
    long ShowProjectionBorder(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z
    long StopAndSetDisplayAnimatedVisual(CDisplayAnimatedVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long StyleChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchDesktop@CWindowList@@UEAAJK_K@Z
    virtual long SwitchDesktop(unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z
    void SyncWindowData(IDwmWindow *, CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long TextChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackCrossDisplaysMoveDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@HH@Z
    void TrackCrossDisplaysMoveDuringModeChange(CWindowData *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackMinimizedWindowDuringModeChange@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void TrackMinimizedWindowDuringModeChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionsForceDisabledChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long TransitionsForceDisabledChange(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CWindowList@@UEAAXXZ
    virtual void Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAccentState@CWindowList@@QEAAXPEAVCWindowData@@@Z
    void UnregisterAccentState(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForSoftwareCursorChangeNotification@CWindowList@@QEAAXPEAUISoftwareCursorChangeListener@@@Z
    void UnregisterForSoftwareCursorChangeNotification(ISoftwareCursorChangeListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z
    virtual long UnregisterIndirectSwapchainRenderTargetFromWindow(IDwmWindow *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentState@CWindowList@@QEAAXXZ
    void UpdateAccentState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorPosition@CWindowList@@QEAAJAEBUtagPOINT@@@Z
    long UpdateCursorPosition(tagPOINT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsLightTheme@CWindowList@@QEAAXXZ
    void UpdateIsLightTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScene@CWindowList@@UEAAJXZ
    virtual long UpdateScene();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z
    virtual long UpdateSharedVirtualDesktopVisual(unsigned long, MILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL const *, _REMOTE_PORT_VIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShellWindowFrameColorization@CWindowList@@QEAAJXZ
    long UpdateShellWindowFrameColorization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z
    long UpdateWindowScale(CWindowData *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long WindowMinimizing(IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z
    virtual long WindowTransitionChange(IDwmWindow *, int, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z
    virtual long ZOrder(IDwmWindow *, IDwmWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZOrderAcrylicSheet@CWindowList@@QEAAJXZ
    long ZOrderAcrylicSheet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZorderBandChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z
    virtual long ZorderBandChange(IDwmWindow *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowList@@UEAA@XZ
    virtual ~CWindowList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z
    long AnimationChange(MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ
    long ApplyWindowResizeStateTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void CheckForMaximizedChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT@@@Z
    void ClearTaggedWindowRect(MILCMD_DWM_REDIRECTION_CLEARTAGGEDWINDOWRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ
    void CommitAndCloseResizeCompSyncObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertLargeIntegerToDwmWindowCloseEventToken@CWindowList@@AEAA?AUDWM_WINDOW_CLOSE_EVENT_TOKEN@@AEBT_LARGE_INTEGER@@@Z
    DWM_WINDOW_CLOSE_EVENT_TOKEN ConvertLargeIntegerToDwmWindowCloseEventToken(_LARGE_INTEGER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CovertLargeIntegerToDwmCaptureToken@CWindowList@@AEAA?AUDWM_CAPTURE_TOKEN@@AEBT_LARGE_INTEGER@@@Z
    DWM_CAPTURE_TOKEN CovertLargeIntegerToDwmCaptureToken(_LARGE_INTEGER const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisual@CWindowList@@AEAAJXZ
    long CreateRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUCDesktop@@@Z
    long CreateRootVisualForDesktop(CDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z
    long DesktopCreate(MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z
    void DesktopFree(MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z
    long DesktopSwitchImmediately(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyRootVisualForDesktop@CWindowList@@AEAAXPEAUCDesktop@@@Z
    void DestroyRootVisualForDesktop(CDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z
    long EndTransition(MILCMD_DWM_REDIRECTION_ENDTRANSITION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ
    long EnsureAcrylicSheet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long EnsureTopLevelWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowArrangementTransition@CWindowList@@AEAAJXZ
    long EnsureWindowArrangementTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z
    CVisual * FindPrecedingVisibleWindowVisual(_LIST_ENTRY *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@_NPEAUtagRECT@@@Z
    long GetCaptionButtonBounds(HWND__*, bool, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorizationParameters@CWindowList@@AEAAXPEAUMILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS@@@Z
    void GetColorizationParameters(MILCMD_DWM_REDIRECTION_GETCOLORIZATIONPARAMETERS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalState@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETGLOBALSTATE@@@Z
    long GetGlobalState(MILCMD_DWM_REDIRECTION_GETGLOBALSTATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z
    long GetNcAdornmentInfoAttribute(HWND__*, NCADORNMENT_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z
    long GetTitleBarInfo(MILCMD_DWM_REDIRECTION_GETTITLEBARINFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z
    long GetWindowAttribute(MILCMD_DWM_WINDOWATTRIBUTE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitTestQuery@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_HITTESTQUERY@@@Z
    long HitTestQuery(MILCMD_DWM_REDIRECTION_HITTESTQUERY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z
    long IconChange(MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void ImmediateDestroySprite(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void ImmediateDestroyWindow(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertIntoVisualTree@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long InsertIntoVisualTree(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z
    long InvalidateIconicBitmaps(unsigned long, MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBaseThumbnailDestinationReachable@CWindowList@@AEAA_NPEAVCWindowData@@@Z
    bool IsBaseThumbnailDestinationReachable(CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSpecialViewWindow@CWindowList@@AEAA_NPEBVCWindowData@@@Z
    bool IsSpecialViewWindow(CWindowData const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCapturable@CWindowList@@AEAAJPEAUHWND__@@PEA_N@Z
    long IsWindowCapturable(HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z
    long MouseLeaveWindow(MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnClientGlassChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnClientMarginsChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDwmShrinkMoveSizeWindowNotification@CWindowList@@AEAAJPEAUHWND__@@IUtagPOINT@@I@Z
    long OnDwmShrinkMoveSizeWindowNotification(HWND__*, unsigned int, tagPOINT, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnGDISurfaceChange(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnHostWindowDying(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z
    void OnProxyWindowDying(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z
    long OnProxyWindowUpdate(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSnapPreviewInsertAfterNotification@CWindowList@@AEAAJPEAUHWND__@@0@Z
    long OnSnapPreviewInsertAfterNotification(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTransparencyPolicyChanged@CWindowList@@AEAAJ_N@Z
    long OnTransparencyPolicyChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z
    long OnWindowArrangementContinue(MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ
    long OnWindowArrangementEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z
    long OnWindowArrangementStart(MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostActivateLivePreview@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW@@@Z
    long PostActivateLivePreview(MILCMD_DWM_REDIRECTION_ACTIVATELIVEPREVIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z
    long ProcessDeviceStateChangeNotification(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z
    long QueryThumbnailSourceSize(unsigned long, MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z
    long QueryThumbnailType(unsigned long, MILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z
    long QueryWindowThumbnailSourceSize(MILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z
    long ReevaluateAutoParenting(CWindowData *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThumbnail@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL@@@Z
    long RegisterThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_REGISTERTHUMBNAIL *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTransparencySystemPolicyChangeEvent@CWindowList@@AEAAJXZ
    long RegisterTransparencySystemPolicyChangeEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@PEAXUDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z
    long RegisterWindowCloseEvent(HWND__*, void *, DWM_WINDOW_CLOSE_EVENT_TOKEN);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z
    long RotationModeChange(MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ
    long RunAcrylicSheetEndArrangementAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z
    long SetColorizationParameters(MILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicBitmapBackgroundColor@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR@@@Z
    long SetIconicBitmapBackgroundColor(MILCMD_DWM_REDIRECTION_SETIMMERSIVEICONICDEFAULTCOLOR const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z
    long SetIconicLivePreviewBitmap(unsigned long, MILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP const *, _REMOTE_PORT_VIEW const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z
    long SetIconicThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL const *, _REMOTE_PORT_VIEW const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z
    long SetOwner(CWindowData *, CWindowData *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaggedWindowRect@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT@@@Z
    void SetTaggedWindowRect(MILCMD_DWM_REDIRECTION_SETTAGGEDWINDOWRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z
    long SetThemeAttributesAttribute(HWND__*, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z
    long SetWindowAttribute(MILCMD_DWM_WINDOWATTRIBUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z
    long SettingsChange(MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z
    long ShellWindowChange(MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z
    long StartTransition(MILCMD_DWM_REDIRECTION_STARTTRANSITION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupBegin@CWindowList@@AEAAJXZ
    long StartupBegin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupEnd@CWindowList@@AEAAJXZ
    long StartupEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long ToggleAutoParenting(CWindowData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionBitmap@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_TRANSITIONBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z
    long TransitionBitmap(MILCMD_DWM_REDIRECTION_TRANSITIONBITMAP const *, _REMOTE_PORT_VIEW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z
    long UnregisterThumbnail(unsigned long, MILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z
    long UnregisterThumbnail(CThumbnailData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z
    long UnregisterWindowCloseEvent(HWND__*, DWM_WINDOW_CLOSE_EVENT_TOKEN);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAccentBlurRect@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE@@@Z
    long UpdateAccentBlurRect(MILCMD_DWM_REDIRECTION_ACCENTBLURRECTUPDATE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z
    long UpdateDesktopWindowReplacement(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z
    long UpdateThumbnailProperties(unsigned long, MILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z
    long UpdateThumbnailsForNewWindow(CWindowData *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `UpdateShellWindowFrameColorization` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetMagnifierControlForDesktop` | `class CMagnifierControl *` | `Accessor` | `Pdb` | No (PDB) |
| `GetRootVisualForDesktop` | `class CRenderDataVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `RecreateDesktopWindowReplacementForDesktops` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReevaluateAutoParenting` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertIntoVisualTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindPrecedingVisibleWindowVisual` | `class CVisual *` | `Method` | `Pdb` | No (PDB) |
| `OnPositionChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetPhysicalPtFromLogical` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `TrackCrossDisplaysMoveDuringModeChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateScene` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceUpdateScene` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroyPendingSprites` | `void` | `Method` | `Pdb` | No (PDB) |
| `ImmediateDestroySprite` | `void` | `Method` | `Pdb` | No (PDB) |
| `CheckForMaximizedChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnGDISurfaceChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateThumbnailsForNewWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContentBoundsChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnSizeChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShowHide` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsSpecialViewWindow` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `ImmediateDestroyWindow` | `void` | `Method` | `Pdb` | No (PDB) |
| `UnregisterAccentState` | `void` | `Method` | `Pdb` | No (PDB) |
| `ShowProjectionBorder` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetOwner` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureTopLevelWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `SettingsChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetShellWindowForDesktop` | `struct HWND__*` | `Accessor` | `Pdb` | No (PDB) |
| `OnSnapPreviewInsertAfterNotification` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindWindowDataByHwnd` | `class CWindowData *` | `Method` | `Pdb` | No (PDB) |
| `GetWindowListForDesktop` | `struct _LIST_ENTRY *` | `Accessor` | `Pdb` | No (PDB) |
| `StartTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `DesktopCreate` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetGlobalLightSetForDesktop` | `class CGlobalLightSet *` | `Accessor` | `Pdb` | No (PDB) |
| `CreateRootVisualForDesktop` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessBackChannelMessage` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetRenderTargetRootVisualForDesktop` | `class CContainerVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `ProcessDeviceStateChangeNotification` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReleaseAcrylicSheetAndOwnerIfNotUsed` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsScreenRotating` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `OnWindowArrangementContinue` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureWindowArrangementTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateWindowScale` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnClientMarginsChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnClientGlassChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetOverlayRootVisualForDesktop` | `class CContainerVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowListForDesktopCanFail` | `struct _LIST_ENTRY *` | `Accessor` | `Pdb` | No (PDB) |
| `TextChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetLowestProjectedShadowCasterWindowForDesktop` | `class CTopLevelWindow *` | `Accessor` | `Pdb` | No (PDB) |
| `EndTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryThumbnailType` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateThumbnailProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `QueryThumbnailSourceSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterThumbnail` | `long` | `Method` | `Pdb` | No (PDB) |
| `FindThumbnailData` | `class CThumbnailData *` | `Method` | `Pdb` | No (PDB) |
| `UnregisterThumbnail` | `long` | `Method` | `Pdb` | No (PDB) |
| `TrackMinimizedWindowDuringModeChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetWindowAttribute` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetCaptionButtonBounds` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CaptureDesktop` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartupBegin` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetColorizationParameters` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetBlurredWallpaperSurface` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RegisterAccentState` | `void` | `Method` | `Pdb` | No (PDB) |
| `QueueDestroySprite` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsBaseThumbnailDestinationReachable` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `CleanupThemeStatics` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnProcessDisconnected` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetWindowAttribute` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureAcrylicSheet` | `long` | `Method` | `Pdb` | No (PDB) |
| `ZOrderAcrylicSheet` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShellWindowChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateOrDestroyDesktopWindowReplacementForDesktops` | `void` | `Method` | `Pdb` | No (PDB) |
| `OwnerChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `HasIconicBitmapChange` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateIsLightTheme` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnTransparencyPolicyChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateAccentState` | `void` | `Method` | `Pdb` | No (PDB) |
| `ChildContentChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroySprite` | `long` | `Method` | `Pdb` | No (PDB) |
| `DesktopSwitchImmediately` | `long` | `Method` | `Pdb` | No (PDB) |
| `HitTestQuery` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActivationChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReparentingFromDesktop` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterForSoftwareCursorChangeNotification` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetTaggedWindowRect` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `RegisterTransparencySystemPolicyChangeEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `StartupEnd` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetProjectedShadowSceneForDesktop` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RotationModeChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopAndSetDisplayAnimatedVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClipChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetIconicThumbnail` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `QueryWindowThumbnailSourceSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `CWindowList` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `BringDesktopToFront` | `long` | `Method` | `Pdb` | No (PDB) |
| `CommitAndCloseResizeCompSyncObject` | `void` | `Method` | `Pdb` | No (PDB) |
| `DestroyWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `MoveSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `MoveTransitionAndTouchVisualToFront` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowDataDestroyed` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessAsyncDwmMessage` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessSyncDwmMessage` | `long` | `Method` | `Pdb` | No (PDB) |
| `StyleChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `SwitchDesktop` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateCursorPosition` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateSharedVirtualDesktopVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateSprite` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetTitleBarInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetExcludeFromDDA` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPassiveUpdateMode` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateAccentBlurRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetThemeAttributesAttribute` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InvalidateIconicBitmaps` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetSyncedWindowDataByHwnd` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetSyncedWindowData` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SyncWindowData` | `void` | `Method` | `Pdb` | No (PDB) |
| `CreateRootVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateDesktopWindowReplacement` | `long` | `Method` | `Pdb` | No (PDB) |
| `Lock` | `void` | `Method` | `Pdb` | No (PDB) |
| `ConvertLargeIntegerToDwmWindowCloseEventToken` | `struct DWM_WINDOW_CLOSE_EVENT_TOKEN` | `Method` | `Pdb` | No (PDB) |
| `CovertLargeIntegerToDwmCaptureToken` | `struct DWM_CAPTURE_TOKEN` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CWindowList` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `AccentPolicyChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddProjectedShadowCaster` | `long` | `Method` | `Pdb` | No (PDB) |
| `AlphaChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `AnimationChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApplyWindowResizeStateTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `BlurBehindChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `BringDesktopToFront` | `long` | `Method` | `Pdb` | No (PDB) |
| `CaptureWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `ChangeCursorSynchronization` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClearAllSnapshotRepresentations` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClearTaggedWindowRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `ClientGlassChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClientMarginsChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `CloakChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ContentProtectionChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateCursorVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateWindowTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `DesktopFree` | `void` | `Method` | `Pdb` | No (PDB) |
| `DesktopThumbnailChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroyRootVisualForDesktop` | `void` | `Method` | `Pdb` | No (PDB) |
| `DestroyWindowTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `DisallowPeekChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `DismissCurrentTouchResizeHighlight` | `void` | `Method` | `Pdb` | No (PDB) |
| `FindTabWindowData` | `class CWindowData *` | `Method` | `Pdb` | No (PDB) |
| `ForceActiveWindowAppearanceChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceConnectClientNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceDisconnectClientNode` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceIconicRepresentationChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `FrameMarginsChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `FreezeRepresentationChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `GDISurfaceChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetColorizationParameters` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetGlobalState` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNcAdornmentInfoAttribute` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetNumOwnees` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `GetOwneeAtIndex` | `struct IDwmWindow *` | `Accessor` | `Pdb` | No (PDB) |
| `GetOwner` | `struct IDwmWindow *` | `Accessor` | `Pdb` | No (PDB) |
| `GetText` | `unsigned short const *` | `Accessor` | `Pdb` | No (PDB) |
| `GetWindowBounds` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GhostChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `HandleScreenRotation` | `long` | `Method` | `Pdb` | No (PDB) |
| `IconChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsCursorChange` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsInWindowMoveChange` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsInWindowResizeChange` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsRemoteAppMode` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsWindowCapturable` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `LivePreviewExcludeChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `MonitorChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `MouseLeaveWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDisableMoveSizeFeedbackChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnDwmShrinkMoveSizeWindowNotification` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnGraphicsDeviceLost` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnHostWindowDying` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnProxyWindowDying` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnProxyWindowUpdate` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowArrangementEnd` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnWindowArrangementStart` | `long` | `Method` | `Pdb` | No (PDB) |
| `PostActivateLivePreview` | `long` | `Method` | `Pdb` | No (PDB) |
| `RAILModeChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `RegisterForSoftwareCursorChangeNotification` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterIndirectSwapchainRenderTargetForWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterSharedThumbnailVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterSharedVirtualDesktopVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterThumbnail` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterWindowCloseEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `RunAcrylicSheetEndArrangementAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetCommitHandle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetCornerStyle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetCursorDesktopVisibility` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetHolographic` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetIconicBitmapBackgroundColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetIconicLivePreviewBitmap` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPartColor` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRemoteAppPolicy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetResizeCompSyncObject` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetSystemBackdropType` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetUseDarkModeColors` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShowHide` | `long` | `Method` | `Pdb` | No (PDB) |
| `ToggleAutoParenting` | `long` | `Method` | `Pdb` | No (PDB) |
| `TransitionBitmap` | `long` | `Method` | `Pdb` | No (PDB) |
| `TransitionsForceDisabledChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `Unlock` | `void` | `Method` | `Pdb` | No (PDB) |
| `UnregisterIndirectSwapchainRenderTargetFromWindow` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnregisterWindowCloseEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `WindowMinimizing` | `long` | `Method` | `Pdb` | No (PDB) |
| `WindowTransitionChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `ZOrder` | `long` | `Method` | `Pdb` | No (PDB) |
| `ZorderBandChange` | `long` | `Method` | `Pdb` | No (PDB) |
