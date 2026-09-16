#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 20 member(s).
namespace Windows::UI::Composition {
class SpotLight {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpotLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SpotLight@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@SpotLight@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@SpotLight@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpotLight@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpotLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpotLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation0@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation0(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation1@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation1(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation2@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation2(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCoordinateSpace@SpotLight@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z
    void SetCoordinateSpace(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@SpotLight@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInnerConeIntensity@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetInnerConeIntensity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxAttenuationCutoff@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetMaxAttenuationCutoff(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinAttenuationCutoff@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetMinAttenuationCutoff(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterConeIntensity@SpotLight@Composition@UI@Windows@@QEAAJM@Z
    long SetOuterConeIntensity(float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpotLight@Composition@UI@Windows@@QEAA@XZ
    SpotLight();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpotLight@Composition@UI@Windows@@UEAA@XZ
    virtual ~SpotLight();
};
} // namespace Windows::UI::Composition
