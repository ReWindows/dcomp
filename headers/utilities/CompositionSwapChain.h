#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class CompositionSwapChain {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSwapChain@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionSwapChain@Composition@UI@Windows@@QEAA@XZ
    CompositionSwapChain();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSwapChain@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSwapChain@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSwapChain@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDXGISwapChain1@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IDXGISwapChain1*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSwapChain@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAX@Z
    long RuntimeClassInitialize(WindissectOpaque *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionSwapChain@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionSwapChain();
};
} // namespace Windows::UI::Composition
