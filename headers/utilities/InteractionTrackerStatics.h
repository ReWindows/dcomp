#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 30 member(s).
namespace Windows::UI::Composition::Interactions {
class InteractionTrackerStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAPEAUIInteractionTracker@2345@@Z
    virtual long Create(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWithOwner@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositor@345@PEAUIInteractionTrackerOwner@2345@PEAPEAUIInteractionTracker@2345@@Z
    virtual long CreateWithOwner(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0PEAW4InteractionBindingAxisModes@2345@@Z
    virtual long GetBindingMode(WindissectOpaque *, WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteractionTrackerStatics@Interactions@Composition@UI@Windows@@QEAA@XZ
    InteractionTrackerStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBindingMode@InteractionTrackerStatics@Interactions@Composition@UI@Windows@@UEAAJPEAUIInteractionTracker@2345@0W4InteractionBindingAxisModes@2345@@Z
    virtual long SetBindingMode(WindissectOpaque *, WindissectOpaque *, int);
};
} // namespace Windows::UI::Composition::Interactions
