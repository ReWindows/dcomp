#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition {
class CompositionProjectedShadowCasterIterator {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionProjectedShadowCasterIterator();
};
} // namespace Windows::UI::Composition
