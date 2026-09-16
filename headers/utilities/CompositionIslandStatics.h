#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 24 member(s).
namespace Windows::UI::Composition {
class CompositionIslandStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionIslandStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionIslandStatics@Composition@UI@Windows@@QEAA@XZ
    CompositionIslandStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@@Z
    virtual long ConnectIsland(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long ConnectIslandAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectIsland@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@@Z
    virtual long DisconnectIsland(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectIslandAsync@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAUICompositionIslandSite@234@PEAUICompositionIsland@234@PEAPEAUIAsyncAction@Foundation@4@@Z
    virtual long DisconnectIslandAsync(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionIslandStatics@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionIslandStatics@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionIslandStatics@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionIslandStatics@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionIslandStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition
