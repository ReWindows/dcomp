#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Internal {
class CompositionSuperWetInkSource {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@QEAA@XZ
    CompositionSuperWetInkSource();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionSuperWetInkSource();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceSwapChain@CompositionSuperWetInkSource@Internal@Composition@UI@Windows@@IEAAXPEAVCompositionSurfaceBrush@345@PEAVCompositionSwapChain@345@@Z
    void SetReferenceSwapChain(WindissectOpaque *, WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Internal
