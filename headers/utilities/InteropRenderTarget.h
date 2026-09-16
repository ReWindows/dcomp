#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class InteropRenderTarget {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropRenderTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropRenderTarget@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropRenderTarget@Composition@UI@Windows@@QEAA@XZ
    InteropRenderTarget();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropRenderTarget@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropRenderTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropRenderTarget@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropRenderTarget();
};
} // namespace Windows::UI::Composition
