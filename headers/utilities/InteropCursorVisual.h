#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class InteropCursorVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropCursorVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropCursorVisual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropCursorVisual@Composition@UI@Windows@@QEAA@XZ
    InteropCursorVisual();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropCursorVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropCursorVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropCursorVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_K@Z
    long RuntimeClassInitialize(WindissectOpaque *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropCursorVisual@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropCursorVisual();
};
} // namespace Windows::UI::Composition
