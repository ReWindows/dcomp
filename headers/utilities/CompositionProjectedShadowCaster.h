#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class CompositionProjectedShadowCaster {
public:
    class Api;
    class Velocity;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAA@XZ
    CompositionProjectedShadowCaster();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAncestorClipVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long SetAncestorClipVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetBrush(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCastingVisual@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVVisual@234@@Z
    long SetCastingVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMask@CompositionProjectedShadowCaster@Composition@UI@Windows@@QEAAJPEAVCompositionBrush@234@@Z
    long SetMask(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionProjectedShadowCaster@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionProjectedShadowCaster();
};
} // namespace Windows::UI::Composition
