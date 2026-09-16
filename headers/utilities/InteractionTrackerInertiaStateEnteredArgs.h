#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 49 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerInertiaStateEnteredArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerInertiaStateEnteredArgs();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@M0MPEBU6785@PEAM_NH3@Z
    long RuntimeClassInitialize(WindissectOpaque &, float, WindissectOpaque &, float, WindissectOpaque *, float *, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFromBinding@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsFromBinding(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInertiaFromImpulse@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInertiaFromImpulse(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifiedRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z
    virtual long get_ModifiedRestingPosition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ModifiedRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z
    virtual long get_ModifiedRestingScale(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingPosition@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_NaturalRestingPosition(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalRestingScale@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_NaturalRestingScale(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionVelocityInPixelsPerSecond@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_PositionVelocityInPixelsPerSecond(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestId@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_RequestId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleVelocityInPercentPerSecond@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_ScaleVelocityInPercentPerSecond(float *);
};
} // namespace Windows::UI::Composition::Interactions
