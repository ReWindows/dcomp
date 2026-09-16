#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 47 member(s).
namespace DirectComposition {
class CVisualExtensionV4 {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVisualExtensionV4@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionVisual@@H0@Z
    virtual long AddVisual(IDCompositionVisual *, int, IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableHeatMap@CVisualExtensionV4@DirectComposition@@UEAAJXZ
    virtual long DisableHeatMap();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableRedrawRegions@CVisualExtensionV4@DirectComposition@@UEAAJXZ
    virtual long DisableRedrawRegions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableHeatMap@CVisualExtensionV4@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long EnableHeatMap(_D3DCOLORVALUE const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableRedrawRegions@CVisualExtensionV4@DirectComposition@@UEAAJXZ
    virtual long EnableRedrawRegions();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVisualExtensionV4@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVisualExtensionV4@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllVisuals@CVisualExtensionV4@DirectComposition@@UEAAJXZ
    virtual long RemoveAllVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long RemoveVisual(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackFaceVisibility@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_BACKFACE_VISIBILITY@@@Z
    virtual long SetBackFaceVisibility(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapInterpolationMode@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_BITMAP_INTERPOLATION_MODE@@@Z
    virtual long SetBitmapInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderMode@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_BORDER_MODE@@@Z
    virtual long SetBorderMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CVisualExtensionV4@DirectComposition@@UEAAJAEBUD2D_RECT_F@@@Z
    virtual long SetClip(D2D_RECT_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionClip@@@Z
    virtual long SetClip(IDCompositionClip *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositeMode@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_COMPOSITE_MODE@@@Z
    virtual long SetCompositeMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDepthMode@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_DEPTH_MODE@@@Z
    virtual long SetDepthMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionEffect@@@Z
    virtual long SetEffect(IDCompositionEffect *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetHeight(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHeight@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetHeight(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetX@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetY@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetOffsetZ(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffsetZ@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOffsetZ(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetOpacity(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacityMode@CVisualExtensionV4@DirectComposition@@UEAAJW4DCOMPOSITION_OPACITY_MODE@@@Z
    virtual long SetOpacityMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeHeight@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetRelativeHeight(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeHeight@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRelativeHeight(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetX@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetRelativeOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetX@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRelativeOffsetX(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetY@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetRelativeOffsetY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeOffsetY@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRelativeOffsetY(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeWidth@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetRelativeWidth(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRelativeWidth@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetRelativeWidth(IDCompositionAnimation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisualExtensionV4@DirectComposition@@UEAAJAEBUD2D_MATRIX_3X2_F@@@Z
    virtual long SetTransform(D2D_MATRIX_3X2_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisualExtensionV4@DirectComposition@@UEAAJAEBUD2D_MATRIX_4X4_F@@@Z
    virtual long SetTransform(D2D_MATRIX_4X4_F const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionTransform3D@@@Z
    virtual long SetTransform(IDCompositionTransform3D *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionTransform@@@Z
    virtual long SetTransform(IDCompositionTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformParent@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetTransformParent(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CVisualExtensionV4@DirectComposition@@UEAAJH@Z
    virtual long SetVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@CVisualExtensionV4@DirectComposition@@UEAAJM@Z
    virtual long SetWidth(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWidth@CVisualExtensionV4@DirectComposition@@UEAAJPEAUIDCompositionAnimation@@@Z
    virtual long SetWidth(IDCompositionAnimation *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMainVisualProxy@CVisualExtensionV4@DirectComposition@@CAPEAVCVisualProxy@2@PEAX@Z
    static WindissectOpaque * GetMainVisualProxy(void *);
};
} // namespace DirectComposition
