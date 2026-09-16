#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ShapeVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShapeVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ShapeVisual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShapeVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildInternal@ShapeVisual@Composition@UI@Windows@@UEAAJXZ
    virtual long RebuildInternal();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShapeVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShapeVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShapeVisual@Composition@UI@Windows@@QEAA@XZ
    ShapeVisual();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShapeVisual@Composition@UI@Windows@@UEAA@XZ
    virtual ~ShapeVisual();
};
} // namespace Windows::UI::Composition
