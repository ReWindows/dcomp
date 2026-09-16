#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class CompositionColorGradientStopCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionItemFromApi@CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAA@PEAUICompositionColorGradientStop@234@PEAJ@Z
    CollectionItemFromApi(WindissectOpaque *, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAA@XZ
    CompositionColorGradientStopCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCollectionChanged@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void OnCollectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreAddItem@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual long PreAddItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreRemoveItem@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAXAEBV?$RefPtr@VCompositionColorGradientStop@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    virtual void PreRemoveItem(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionColorGradientStopCollection@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGradientBrush@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionColorGradientStopCollection@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionColorGradientStopCollection();
};
} // namespace Windows::UI::Composition
