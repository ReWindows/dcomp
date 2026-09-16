#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerInteractingStateEnteredArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerInteractingStateEnteredArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFromBinding@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsFromBinding(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
};
} // namespace Windows::UI::Composition::Interactions
