#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class InteropVisualReference {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropVisualReference@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropVisualReference@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropVisualReference@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropVisualReference@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropVisualReference@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *);
};
} // namespace Windows::UI::Composition
