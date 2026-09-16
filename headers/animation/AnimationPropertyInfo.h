#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class AnimationPropertyInfo {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AnimationPropertyInfo@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPropertyInfo@AnimationPropertyInfo@Composition@UI@Windows@@QEAAXXZ
    void ClearPropertyInfo();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AnimationPropertyInfo@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AnimationPropertyInfo@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationPropertyInfo@Composition@UI@Windows@@UEAA@XZ
    virtual ~AnimationPropertyInfo();
};
} // namespace Windows::UI::Composition
