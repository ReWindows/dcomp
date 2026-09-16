#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerInertiaNaturalMotionStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTrackerInertiaNaturalMotion@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerInertiaNaturalMotionStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerInertiaNaturalMotionStatics@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition::Interactions
