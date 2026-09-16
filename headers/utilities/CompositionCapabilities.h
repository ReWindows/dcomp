#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class CompositionCapabilities {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionCapabilities@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsFast@CompositionCapabilities@Composition@UI@Windows@@QEAA_NXZ
    bool AreEffectsFast();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreEffectsSupported@CompositionCapabilities@Composition@UI@Windows@@QEAA_NXZ
    bool AreEffectsSupported();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionCapabilities@Composition@UI@Windows@@QEAA@XZ
    CompositionCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z
    static long Create(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCapabilitiesChanged@CompositionCapabilities@Composition@UI@Windows@@QEAAXXZ
    void OnCapabilitiesChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionCapabilities@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionCapabilities@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    long add_Changed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z
    long remove_Changed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionCapabilities@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionCapabilities();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@CompositionCapabilities@Composition@UI@Windows@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
};
} // namespace Windows::UI::Composition
