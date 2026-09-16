#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class CompositionGeometry {
public:
    class Api;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionGeometry@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionGeometry@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrimEnd@CompositionGeometry@Composition@UI@Windows@@QEAAJM@Z
    long SetTrimEnd(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrimOffset@CompositionGeometry@Composition@UI@Windows@@QEAAJM@Z
    long SetTrimOffset(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTrimStart@CompositionGeometry@Composition@UI@Windows@@QEAAJM@Z
    long SetTrimStart(float);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionGeometry@Composition@UI@Windows@@IEAA@XZ
    CompositionGeometry();
};
} // namespace Windows::UI::Composition
