#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Windows::UI::Composition {
class CompositionProjectedShadowCasterCollectionStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@QEAA@XZ
    CompositionProjectedShadowCasterCollectionStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevelStatic@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxRespectedCasters@CompositionProjectedShadowCasterCollectionStatics@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_MaxRespectedCasters(int *);
};
} // namespace Windows::UI::Composition
