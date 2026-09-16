#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class DelegatedInkTrailVisual {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DelegatedInkTrailVisual@Composition@UI@Windows@@QEAA@XZ
    DelegatedInkTrailVisual();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DelegatedInkTrailVisual@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DelegatedInkTrailVisual@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionSwapChain@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DelegatedInkTrailVisual@Composition@UI@Windows@@UEAA@XZ
    virtual ~DelegatedInkTrailVisual();
};
} // namespace Windows::UI::Composition
