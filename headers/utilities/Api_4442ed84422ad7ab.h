#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 44 member(s).
namespace Windows::UI::Composition::InteropCursorVisual {
class Api {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@H0@Z
    virtual long AddVisual(IDCompositionVisual *, int, IDCompositionVisual *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteropCursorVisual@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableHeatMap@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ
    virtual long DisableHeatMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableRedrawRegions@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ
    virtual long DisableRedrawRegions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHeatMap@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long EnableHeatMap(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableRedrawRegions@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ
    virtual long EnableRedrawRegions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJXZ
    virtual long RemoveAllVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long RemoveVisual(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackFaceVisibility@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_BACKFACE_VISIBILITY@@@Z
    virtual long SetBackFaceVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapInterpolationMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_BITMAP_INTERPOLATION_MODE@@@Z
    virtual long SetBitmapInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_BORDER_MODE@@@Z
    virtual long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBUD2D_RECT_F@@@Z
    virtual long SetClip(D2D_RECT_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionClip@@@Z
    virtual long SetClip(IDCompositionClip *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDepthMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_DEPTH_MODE@@@Z
    virtual long SetDepthMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionEffect@@@Z
    virtual long SetEffect(IDCompositionEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetHeight(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInput@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAX@Z
    virtual long SetInput(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteraction@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionInteractionPartner@@@Z
    virtual long SetInteraction(IDCompositionInteractionPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsHardwareCursorEnabled@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetIsHardwareCursorEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetOffsetZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetZ(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOpacity(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacityMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_OPACITY_MODE@@@Z
    virtual long SetOpacityMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRasterizationScaleOverride@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetRasterizationScaleOverride(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeHeight@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetRelativeHeight(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetX@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetRelativeOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetY@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetRelativeOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeWidth@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetRelativeWidth(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long SetTransform(D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBUD2D_MATRIX_4X4_F@@@Z
    virtual long SetTransform(D2D_MATRIX_4X4_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionTransform3D@@@Z
    virtual long SetTransform(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetTransform(IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMode@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_TRANSFORM_MODE@@@Z
    virtual long SetTransformMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParent@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetTransformParent(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransparentForInput@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetTransparentForInput(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJH@Z
    virtual long SetVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@Api@InteropCursorVisual@Composition@UI@Windows@@UEAAJM@Z
    virtual long SetWidth(float);
};
} // namespace Windows::UI::Composition::InteropCursorVisual
