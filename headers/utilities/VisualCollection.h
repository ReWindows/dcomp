#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class VisualCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@VisualCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long EnsureValidState();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualCollection@Composition@UI@Windows@@QEAA@XZ
    VisualCollection();
};
} // namespace Windows::UI::Composition
