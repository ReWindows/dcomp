#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Scenes {
class ScenePbrMaterial {
public:
    class Api;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@345@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNormalScale@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJM@Z
    long SetNormalScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOcclusionStrength@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJM@Z
    long SetOcclusionStrength(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAA@XZ
    virtual ~ScenePbrMaterial();
};
} // namespace Windows::UI::Composition::Scenes
