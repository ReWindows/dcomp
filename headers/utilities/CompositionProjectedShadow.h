#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 20 member(s).
namespace Windows::UI::Composition {
class CompositionProjectedShadow {
public:
    class Api;
    class Velocity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z
    long AddReceiver(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadow@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadow@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatablePropertyInfo@CompositionProjectedShadow@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z
    virtual bool GetAnimatablePropertyInfo(HSTRING__*, int *, ExpressionObjectPropertyInfo *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowCaster@234@I@Z
    WindissectOpaque * GetCasterAtIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReceiverAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowReceiver@234@I@Z
    WindissectOpaque * GetReceiverAtIndex(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@_N0@Z
    long InsertCaster(WindissectOpaque *, bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedPropertyChanged@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@_N1PEBXG@Z
    virtual long OnAnimatedPropertyChanged(unsigned int, unsigned int, int, bool, bool, void const *, unsigned short);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadow@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ
    long RemoveAllCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ
    long RemoveAllReceivers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveReceiver@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowReceiver@234@@Z
    long RemoveReceiver(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFinalValueParameter@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAVCompositionAnimation@234@@Z
    virtual long SetFinalValueParameter(HSTRING__*, HSTRING__*, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@@Z
    long SetLightSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCasters@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ
    long UpdateCasters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateReceivers@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJXZ
    long UpdateReceivers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadow@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionProjectedShadow();
};
} // namespace Windows::UI::Composition
