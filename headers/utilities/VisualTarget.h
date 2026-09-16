#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class VisualTarget {
public:
    class Partner;
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VisualTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@VisualTarget@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VisualTarget@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VisualTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@VisualTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@VisualTarget@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z
    void SetRoot(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VisualTarget@Composition@UI@Windows@@QEAA@XZ
    VisualTarget();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VisualTarget@Composition@UI@Windows@@UEAA@XZ
    virtual ~VisualTarget();
};
} // namespace Windows::UI::Composition
