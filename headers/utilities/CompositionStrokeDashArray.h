#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class CompositionStrokeDashArray {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionStrokeDashArray@Composition@UI@Windows@@QEAA@XZ
    CompositionStrokeDashArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAJM@Z
    virtual long PreAddItem(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAXM@Z
    virtual void PreRemoveItem(float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionStrokeDashArray@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionStrokeDashArray@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSpriteShape@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionStrokeDashArray@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionStrokeDashArray();
};
} // namespace Windows::UI::Composition
