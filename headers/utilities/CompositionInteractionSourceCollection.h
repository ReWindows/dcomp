#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition::Interactions {
class CompositionInteractionSourceCollection {
public:
    class Api;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z
    long Add(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJPEAVVisualInteractionSource@2345@@Z
    long Remove(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@QEAAJXZ
    long RemoveAll();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionInteractionSourceCollection@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionInteractionSourceCollection();
};
} // namespace Windows::UI::Composition::Interactions
