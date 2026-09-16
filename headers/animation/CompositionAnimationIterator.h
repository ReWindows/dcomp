#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class CompositionAnimationIterator {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationIterator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ
    long EnsureVersionMatches();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationIterator@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJPEAVCompositionAnimationGroup@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionAnimationIterator@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionAnimationIterator();
};
} // namespace Windows::UI::Composition
