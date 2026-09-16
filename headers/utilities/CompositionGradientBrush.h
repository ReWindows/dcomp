#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace Windows::UI::Composition {
class CompositionGradientBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionGradientBrush@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleDelayedDestructionRequest@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NXZ
    virtual bool HandleDelayedDestructionRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionGradientBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@CompositionGradientBrush@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionGradientBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@I@Z
    long RuntimeClassInitialize(WindissectOpaque *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetAnchorPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetCenterPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionGradientBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInterpolationSpace@CompositionGradientBrush@Composition@UI@Windows@@QEAAJW4CompositionColorSpace@234@@Z
    long SetInterpolationSpace(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetOffset(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@4@@Z
    long SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CompositionGradientBrush@Composition@UI@Windows@@QEAAJAEBUMatrix3x2@Numerics@Foundation@4@@Z
    long SetTransformMatrix(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatesSurfaces@CompositionGradientBrush@Composition@UI@Windows@@UEAA_NXZ
    virtual bool UpdatesSurfaces();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionGradientBrush@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionGradientBrush();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionGradientBrush@Composition@UI@Windows@@IEAA@XZ
    CompositionGradientBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ
    long EnsureComponentTransform();
};
} // namespace Windows::UI::Composition
