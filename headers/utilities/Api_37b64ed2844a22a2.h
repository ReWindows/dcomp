#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 162 member(s).
namespace Windows::UI::Composition::InteropCompositor {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDeviceState@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long CheckDeviceState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCallback@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long ClearCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAffineTransform2DEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionAffineTransform2DEffect@@@Z
    virtual long CreateAffineTransform2DEffect(IDCompositionAffineTransform2DEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimation@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionAnimation@@@Z
    virtual long CreateAnimation(IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationInstance@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@PEAPEAUIDCompositionAnimationInstancePartner@@@Z
    virtual long CreateAnimationInstance(IDCompositionAnimation *, IDCompositionAnimationInstancePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimationTrigger@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionAnimationTriggerPartner@@@Z
    virtual long CreateAnimationTrigger(IDCompositionAnimationTriggerPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateArithmeticCompositeEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionArithmeticCompositeEffect@@@Z
    virtual long CreateArithmeticCompositeEffect(IDCompositionArithmeticCompositeEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlendEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionBlendEffect@@@Z
    virtual long CreateBlendEffect(IDCompositionBlendEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrightnessEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionBrightnessEffect@@@Z
    virtual long CreateBrightnessEffect(IDCompositionBrightnessEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColor@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionColorPartner@@@Z
    virtual long CreateColor(IDCompositionColorPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateColorMatrixEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionColorMatrixEffect@@@Z
    virtual long CreateColorMatrixEffect(IDCompositionColorMatrixEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositeEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionCompositeEffect@@@Z
    virtual long CreateCompositeEffect(IDCompositionCompositeEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCursorVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJ_KPEAPEAUIDCompositionCursorVisualPartner@@@Z
    virtual long CreateCursorVisual(uint64_t, IDCompositionCursorVisualPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDDisplayRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXIU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@AEBUD2D_SIZE_U@@IPEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateDDisplayRenderTarget(void *, unsigned int, _LUID, unsigned int, int, int, D2D_SIZE_U const &, unsigned int, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopTree@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUIDCompositionDesktopTreePartner@@@Z
    virtual long CreateDesktopTree(_LUID, IDCompositionDesktopTreePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEffectGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionEffectGroup@@@Z
    virtual long CreateEffectGroup(IDCompositionEffectGroup * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFloodEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionFloodEffect@@@Z
    virtual long CreateFloodEffect(IDCompositionFloodEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGaussianBlurEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionGaussianBlurEffect@@@Z
    virtual long CreateGaussianBlurEffect(IDCompositionGaussianBlurEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGdiSpriteBitmap@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHLSURF__@@W4DXGI_FORMAT@@HPEAPEAUIDCompositionGdiSpriteBitmapPartner@@@Z
    virtual long CreateGdiSpriteBitmap(HLSURF__*, int, int, IDCompositionGdiSpriteBitmapPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGenericInkProxy@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionGenericInkPartner@@@Z
    virtual long CreateGenericInkProxy(IDCompositionGenericInkPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateGradientSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@W4D2D1_EXTEND_MODE@@PEAPEAUIDCompositionSurface@@PEAI@Z
    virtual long CreateGradientSurface(unsigned int, int, int, int, IDCompositionSurface * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHueRotationEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionHueRotationEffect@@@Z
    virtual long CreateHueRotationEffect(IDCompositionHueRotationEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInkProxy@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionInkPartner@@@Z
    virtual long CreateInkProxy(IDCompositionInkPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteraction@Api@InteropCompositor@Composition@UI@Windows@@UEAAJKPEAPEAUIDCompositionInteractionPartner@@@Z
    virtual long CreateInteraction(unsigned long, IDCompositionInteractionPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInteraction@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionInteractionPartner@@@Z
    virtual long CreateInteraction(IDCompositionInteractionPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLinearTransferEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionLinearTransferEffect@@@Z
    virtual long CreateLinearTransferEffect(IDCompositionLinearTransferEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateManipulationTransform(IDCompositionTransform *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateManipulationTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionManipulationTransform@@@Z
    virtual long CreateManipulationTransform(IDCompositionManipulationTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionMatrixTransform@@@Z
    virtual long CreateMatrixTransform(IDCompositionMatrixTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMatrixTransform3D@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionMatrixTransform3D@@@Z
    virtual long CreateMatrixTransform3D(IDCompositionMatrixTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMouseInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateMouseInteractionConfiguration(int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMousewheelInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSEWHEEL@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateMousewheelInteractionConfiguration(int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePenInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_PEN@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreatePenInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU7@W4DCOMPOSITION_EDGE_FLAGS@@23PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU7@W4DCOMPOSITION_EDGE_FLAGS@@AEBU_D3DCOLORVALUE@@PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, _D3DCOLORVALUE const &, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitive@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@MPEAUIDCompositionSurface@@PEBU7@W4DCOMPOSITION_EDGE_FLAGS@@PEAUIDCompositionColorPartner@@PEAPEAUIDCompositionPrimitivePartner@@@Z
    virtual long CreatePrimitive(D2D_RECT_F const &, D2D_MATRIX_3X2_F const &, float, IDCompositionSurface *, D2D_MATRIX_3X2_F const *, int, IDCompositionColorPartner *, IDCompositionPrimitivePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrimitiveGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z
    virtual long CreatePrimitiveGroup(IDCompositionPrimitiveGroupPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRectangleClip@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionRectangleClip@@@Z
    virtual long CreateRectangleClip(IDCompositionRectangleClip * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRegionClip@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionRegionClipPartner@@@Z
    virtual long CreateRegionClip(IDCompositionRegionClipPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRemoteAppRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@AEBUtagRECT@@PEAPEAUIDCompositionRemoteAppRenderTargetPartner@@@Z
    virtual long CreateRemoteAppRenderTarget(HWND__*, tagRECT const &, IDCompositionRemoteAppRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRemoteRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@PEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateRemoteRenderTarget(_LUID, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRenderTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJU_LUID@@IW4DXGI_FORMAT@@W4DXGI_COLOR_SPACE_TYPE@@I_NPEAPEAUIDCompositionRenderTargetPartner@@@Z
    virtual long CreateRenderTarget(_LUID, unsigned int, int, int, unsigned int, bool, IDCompositionRenderTargetPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionRotateTransform@@@Z
    virtual long CreateRotateTransform(IDCompositionRotateTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRotateTransform3D@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionRotateTransform3D@@@Z
    virtual long CreateRotateTransform3D(IDCompositionRotateTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSaturationEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionSaturationEffect@@@Z
    virtual long CreateSaturationEffect(IDCompositionSaturationEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalar@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionScalarPartner@@@Z
    virtual long CreateScalar(IDCompositionScalarPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionScaleTransform@@@Z
    virtual long CreateScaleTransform(IDCompositionScaleTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaleTransform3D@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionScaleTransform3D@@@Z
    virtual long CreateScaleTransform3D(IDCompositionScaleTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShadowEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionShadowEffect@@@Z
    virtual long CreateShadowEffect(IDCompositionShadowEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSharedResource(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSkewTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionSkewTransform@@@Z
    virtual long CreateSkewTransform(IDCompositionSkewTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionSurface@@@Z
    virtual long CreateSurface(unsigned int, unsigned int, int, int, IDCompositionSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFactory@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionSurfaceFactory@@@Z
    virtual long CreateSurfaceFactory(IUnknown *, IDCompositionSurfaceFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXPEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromHandle(void *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromHwnd(HWND__*, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceFromVisualSnapshot@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual2@@II_NPEAU_D3DMATRIX@@PEAPEAUIUnknown@@@Z
    virtual long CreateSurfaceFromVisualSnapshot(IDCompositionVisual2*, unsigned int, unsigned int, bool, _D3DMATRIX *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTableTransferEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTableTransferEffect@@@Z
    virtual long CreateTableTransferEffect(IDCompositionTableTransferEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetForHwnd@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@HPEAPEAUIDCompositionTarget@@@Z
    virtual long CreateTargetForHwnd(HWND__*, int, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTouchInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCH@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateTouchInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTouchpadInteractionConfiguration@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_INTERACTION_TYPE_TOUCHPAD@@PEAPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long CreateTouchpadInteractionConfiguration(unsigned int, unsigned int, int, IDCompositionInteractionConfigurationPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransform3DGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTransform3D@@I0@Z
    virtual long CreateTransform3DGroup(IDCompositionTransform3D * *, unsigned int, IDCompositionTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransformGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTransform@@I0@Z
    virtual long CreateTransformGroup(IDCompositionTransform * *, unsigned int, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTranslateTransform@@@Z
    virtual long CreateTranslateTransform(IDCompositionTranslateTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTranslateTransform3D@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTranslateTransform3D@@@Z
    virtual long CreateTranslateTransform3D(IDCompositionTranslateTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTurbulenceEffect@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionTurbulenceEffect@@@Z
    virtual long CreateTurbulenceEffect(IDCompositionTurbulenceEffect * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAUIDCompositionVirtualSurface@@@Z
    virtual long CreateVirtualSurface(unsigned int, unsigned int, int, int, IDCompositionVirtualSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual2@@@Z
    virtual long CreateVisual(IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisual@@@Z
    virtual long CreateVisual(IDCompositionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualBitmap@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAPEAUIDCompositionVisualBitmapPartner@@@Z
    virtual long CreateVisualBitmap(IDCompositionVisualBitmapPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualReferenceController@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@PEAPEAUIDCompositionVisualReferenceControllerPartner@@@Z
    virtual long CreateVisualReferenceController(IDCompositionVisual *, IDCompositionVisualReferenceControllerPartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowNode@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAUHSPRITE__@@UDCOMPOSITION_PROCESS_ATTRIBUTION@@PEAPEAUIDCompositionWindowNodePartner@@@Z
    virtual long CreateWindowNode(HWND__*, HSPRITE__*, DCOMPOSITION_PROCESS_ATTRIBUTION, IDCompositionWindowNodePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowTarget@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUHWND__@@PEAPEAUIDCompositionTarget@@@Z
    virtual long CreateWindowTarget(HWND__*, IDCompositionTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateYCbCrSurface@Api@InteropCompositor@Composition@UI@Windows@@UEAAJIIW4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEAPEAUIDCompositionYCbCrSurfacePartner@@@Z
    virtual long CreateYCbCrSurface(unsigned int, unsigned int, int, IDCompositionYCbCrSurfacePartner * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableD2DStatePreservation@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long DisableD2DStatePreservation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableDebugCounters@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long DisableDebugCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawPrimitiveGroup@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionPrimitiveGroupPartner@@PEAUID2D1DeviceContext@@AEBUD2D_MATRIX_4X4_F@@MW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long DrawPrimitiveGroup(IDCompositionPrimitiveGroupPartner *, ID2D1DeviceContext *, D2D_MATRIX_4X4_F const &, float, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDebugCounters@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long EnableDebugCounters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWhitePixelOptimization@Api@InteropCompositor@Composition@UI@Windows@@UEAAJH@Z
    virtual long EnableWhitePixelOptimization(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceRender@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long ForceRender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatchID@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAK@Z
    virtual long GetCurrentBatchID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentBatchId@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAK@Z
    virtual long GetCurrentBatchId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameIdFromBatchId@Api@InteropCompositor@Composition@UI@Windows@@UEAAJKPEA_K@Z
    virtual long GetFrameIdFromBatchId(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameStatistics@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUDCOMPOSITION_FRAME_STATISTICS@@@Z
    virtual long GetFrameStatistics(DCOMPOSITION_FRAME_STATISTICS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastConfirmedBatchId@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAK@Z
    virtual long GetLastConfirmedBatchId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxTextureSize@Api@InteropCompositor@Composition@UI@Windows@@UEAAIXZ
    virtual unsigned int GetMaxTextureSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintSize@Api@InteropCompositor@Composition@UI@Windows@@UEAAJII@Z
    virtual long HintSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintTiles@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEBUtagRECT@@I@Z
    virtual long HintTiles(tagRECT const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRemoteTreeEnabled@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long IsRemoteTreeEnabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long MarkDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long OfferSurfaceResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResource@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAXHAEBU_GUID@@PEAPEAX@Z
    virtual long OpenSharedResource(void *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedResourceHandle@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAX@Z
    virtual long OpenSharedResourceHandle(IUnknown *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealClose@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long RealClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReclaimSurfaceResources@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long ReclaimSurfaceResources(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshRemoteTreeConnection@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long RefreshRemoteTreeConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCallbackThread@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long RegisterCallbackThread();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCommitCompletionEvent@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z
    virtual long SetCommitCompletionEvent(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositionPrimitiveGroupRendererEnabled@Api@InteropCompositor@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetCompositionPrimitiveGroupRendererEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapAnimationReadBackTime@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long SnapAnimationReadBackTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SynchronizedCommit@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAX@Z
    virtual long SynchronizedCommit(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TelemetrySetApplicationId@Api@InteropCompositor@Composition@UI@Windows@@UEAAJGPEBG@Z
    virtual long TelemetrySetApplicationId(unsigned short, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCursorMouseMove@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long UpdateCursorMouseMove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@Api@InteropCompositor@Composition@UI@Windows@@UEAAJXZ
    virtual long WaitForCommitCompletion();
};
} // namespace Windows::UI::Composition::InteropCompositor
