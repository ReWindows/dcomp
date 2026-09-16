#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerInertiaModifier {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerInertiaModifier();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositor@345@W4InertiaModifierType@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerInertiaModifier@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteractionTrackerInertiaModifier();
};
} // namespace Windows::UI::Composition::Interactions
