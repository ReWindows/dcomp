#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition {
class CompositionIslandEnvironment {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeValues_NoLock@CompositionIslandEnvironment@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z
    void ChangeValues_NoLock(WindissectOpaque, float, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionIslandEnvironment@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionIslandEnvironment@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionIslandEnvironment();
};
} // namespace Windows::UI::Composition
