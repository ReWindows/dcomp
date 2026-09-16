#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 27 member(s).
namespace Windows::UI::Composition {
class CompositionSurfaceBrush {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionSurfaceBrush@Composition@UI@Windows@@QEAA@XZ
    CompositionSurfaceBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ
    long EnsureComponentTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionSurfaceBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealSurface_NoLock@CompositionSurfaceBrush@Composition@UI@Windows@@SAJPEAUICompositionSurface@234@PEAPEAU5234@1@Z
    static long GetRealSurface_NoLock(WindissectOpaque *, WindissectOpaque * *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAPEAUICompositionSurface@234@XZ
    WindissectOpaque * GetSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetAnchorPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBitmapInterpolationMode@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJW4CompositionBitmapInterpolationMode@234@@Z
    long SetBitmapInterpolationMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetCenterPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionSurfaceBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetOffset(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSnapToPixels@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJ_N@Z
    long SetSnapToPixels(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSuperDownSamplePreview@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJ_N@Z
    long SetSuperDownSamplePreview(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@0@Z
    long SetSurface(WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSurface@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJPEAUICompositionSurface@234@@Z
    long SetSurface(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSurfaceBrush@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionSurfaceBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindCompositionTexture@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionTexture@234@@Z
    long BindCompositionTexture(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindDCompSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    long BindDCompSurface(IDCompositionSurface *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindDCompVirtualSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAUIDCompositionVirtualSurface@@@Z
    long BindDCompVirtualSurface(IDCompositionVirtualSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindSwapChainSurface@CompositionSurfaceBrush@Composition@UI@Windows@@AEAAJPEAVCompositionSwapChain@234@@Z
    long BindSwapChainSurface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@CompositionSurfaceBrush@Composition@UI@Windows@@EEAAJPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Windows::UI::Composition
