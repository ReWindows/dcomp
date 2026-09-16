#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class VisualUnorderedCollection {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long Add(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualUnorderedCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualUnorderedCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long EnsureValidState();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualUnorderedCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualUnorderedCollection@Composition@UI@Windows@@QEAAJPEAVAccessor@VisualUnorderedCollectionImpl@234@PEAV6234@PEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
};
} // namespace Windows::UI::Composition
