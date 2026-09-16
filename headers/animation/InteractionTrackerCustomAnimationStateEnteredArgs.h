#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 35 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerCustomAnimationStateEnteredArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerCustomAnimationStateEnteredArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFromBinding@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsFromBinding(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
};
} // namespace Windows::UI::Composition::Interactions
