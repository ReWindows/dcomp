#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class CompositionProjectedShadowReceiver {
public:
    class Api;
    class Velocity;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReceivingVisual@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAAXPEAVVisual@234@@Z
    void SetReceivingVisual(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionProjectedShadowReceiver();
};
} // namespace Windows::UI::Composition
