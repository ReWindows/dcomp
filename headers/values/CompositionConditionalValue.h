#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Interactions {
class CompositionConditionalValue {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToConditional@CompositionConditionalValue@Interactions@Composition@UI@Windows@@QEAAJPEAVConditionalExpressionAnimation@345@@Z
    long AddToConditional(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionConditionalValue();
};
} // namespace Windows::UI::Composition::Interactions
