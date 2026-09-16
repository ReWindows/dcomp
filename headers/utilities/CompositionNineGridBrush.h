#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace Windows::UI::Composition {
class CompositionNineGridBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionNineGridBrush@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionNineGridBrush@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionNineGridBrush@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionNineGridBrush@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetScales@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetInsetScales(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetScalesWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z
    long SetInsetScalesWithValues(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsets@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z
    long SetInsets(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z
    long SetInsetsWithValues(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z
    long Validate_Source(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionNineGridBrush@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionNineGridBrush();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetScaleWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z
    long SetInsetScaleWorker(float *, float, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z
    long SetInsetWorker(float *, float, WindissectOpaque const &);
};
} // namespace Windows::UI::Composition
