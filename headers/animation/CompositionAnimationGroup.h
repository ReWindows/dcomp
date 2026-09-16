#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class CompositionAnimationGroup {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@234@@Z
    long Add(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionAnimationGroup@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionAnimationGroup@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CompositionAnimationGroup@Composition@UI@Windows@@QEAAHXZ
    int GetCount();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionAnimationGroup@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionAnimationGroup@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXPEAVCompositionAnimation@234@@Z
    void Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CompositionAnimationGroup@Composition@UI@Windows@@QEAAXXZ
    void RemoveAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimations@CompositionAnimationGroup@Composition@UI@Windows@@QEAAJPEAVCompositionObject@234@@Z
    long StopAnimations(WindissectOpaque *);
};
} // namespace Windows::UI::Composition
