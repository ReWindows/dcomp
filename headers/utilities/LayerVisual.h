#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class LayerVisual {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@LayerVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LayerVisual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@LayerVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@LayerVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEffect@LayerVisual@Composition@UI@Windows@@QEAAJPEAVCompositionEffectBrush@234@@Z
    long SetEffect(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadow@LayerVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z
    void SetShadow(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayerVisual@Composition@UI@Windows@@UEAA@XZ
    virtual ~LayerVisual();
};
} // namespace Windows::UI::Composition
