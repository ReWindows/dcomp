#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class CompositionTarget {
public:
    class Partner;
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionTarget@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionTarget@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CompositionTarget@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long SetRoot(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionTarget@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionTarget();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionTarget@Composition@UI@Windows@@IEAAJPEAVCompositor@234@PEAUICompositionTargetHostPartner@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Windows::UI::Composition
