#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class CompositionSurfaceWrapper {
public:
    class Api;
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionSurfaceWrapper@Composition@UI@Windows@@QEAA@XZ
    CompositionSurfaceWrapper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingDirtyNotifier@CompositionSurfaceWrapper@Composition@UI@Windows@@QEAAPEAVCDirtyNotifier@DirectComposition@@XZ
    WindissectOpaque * GetUnderlyingDirtyNotifier();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingVirtualSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@QEAAPEAUIDCompositionVirtualSurface@@XZ
    IDCompositionVirtualSurface * GetUnderlyingVirtualSurface();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionSurfaceWrapper@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionSurfaceWrapper@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIDCompositionSurface@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, IDCompositionSurface *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAXXZ
    void ClearDCompSurface();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDCompSurface@CompositionSurfaceWrapper@Composition@UI@Windows@@AEAAJPEAUIDCompositionSurface@@@Z
    long SetDCompSurface(IDCompositionSurface *);
};
} // namespace Windows::UI::Composition
