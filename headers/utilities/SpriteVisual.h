#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class SpriteVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SpriteVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@SpriteVisual@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SpriteVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SpriteVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SpriteVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrush@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionBrush@234@@Z
    void SetBrush(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShadow@SpriteVisual@Composition@UI@Windows@@QEAAXPEAVCompositionShadow@234@@Z
    void SetShadow(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SpriteVisual@Composition@UI@Windows@@QEAA@XZ
    SpriteVisual();
};
} // namespace Windows::UI::Composition
