#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ImplicitAnimationCollection {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z
    long First(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ImplicitAnimationCollection@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImplicitAnimationCollection@Composition@UI@Windows@@UEAA@XZ
    virtual ~ImplicitAnimationCollection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryPlayAnimation@ImplicitAnimationCollection@Composition@UI@Windows@@AEAAJPEAVCompositionObject@234@PEBUAnimationValueData@234@PEA_N@Z
    long TryPlayAnimation(WindissectOpaque *, WindissectOpaque const *, bool *);
};
} // namespace Windows::UI::Composition
