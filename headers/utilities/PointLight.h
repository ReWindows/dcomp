#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 18 member(s).
namespace Windows::UI::Composition {
class PointLight {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PointLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PointLight@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@PointLight@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@PointLight@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PointLight@Composition@UI@Windows@@QEAA@XZ
    PointLight();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PointLight@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PointLight@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PointLight@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation0@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation0(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation1@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation1(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAttenuation2@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetAttenuation2(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@PointLight@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIntensity@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetIntensity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxAttenuationCutoff@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetMaxAttenuationCutoff(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinAttenuationCutoff@PointLight@Composition@UI@Windows@@QEAAJM@Z
    long SetMinAttenuationCutoff(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PointLight@Composition@UI@Windows@@UEAA@XZ
    virtual ~PointLight();
};
} // namespace Windows::UI::Composition
