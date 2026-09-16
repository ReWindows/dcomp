#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class CompositionShapeCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionShapeCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionItemFromApi@CompositionShapeCollection@Composition@UI@Windows@@QEAA@PEAUICompositionShape@234@PEAJ@Z
    CollectionItemFromApi(WindissectOpaque *, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionShapeCollection@Composition@UI@Windows@@QEAA@XZ
    CompositionShapeCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CompositionShapeCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@CompositionShapeCollection@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual long PreAddItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@CompositionShapeCollection@Composition@UI@Windows@@UEAAXAEBV?$RefPtr@VCompositionShape@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual void PreRemoveItem(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionShapeCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionShapeCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionShapeCollection@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVShapeContainer@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionShapeCollection@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionShapeCollection();
};
} // namespace Windows::UI::Composition
