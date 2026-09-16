#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class InteropVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropVisual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropVisual@Composition@UI@Windows@@QEAA@XZ
    InteropVisual();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropVisual@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropVisual();
};
} // namespace Windows::UI::Composition
