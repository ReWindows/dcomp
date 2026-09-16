#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Windows::UI::Composition::Internal {
class HolographicCompositionDisplayStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsync@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@PEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z
    virtual long CreateAsync(WindissectOpaque *, _GUID, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAsyncWithRefreshRate@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAUICompositor@345@U_GUID@@MPEAPEAU?$IAsyncOperation@PEAVHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Foundation@5@@Z
    virtual long CreateAsyncWithRefreshRate(WindissectOpaque *, _GUID, float, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@QEAA@XZ
    HolographicCompositionDisplayStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@HolographicCompositionDisplayStatics@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::UI::Composition::Internal
