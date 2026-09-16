#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class InteropHolographicTexture {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropHolographicTexture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropHolographicTexture@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropHolographicTexture@Composition@UI@Windows@@QEAA@XZ
    InteropHolographicTexture();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropHolographicTexture@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropHolographicTexture@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropHolographicTexture@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropHolographicTexture@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropHolographicTexture();
};
} // namespace Windows::UI::Composition
