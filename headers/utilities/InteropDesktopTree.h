#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class InteropDesktopTree {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropDesktopTree@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropDesktopTree@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropDesktopTree@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropDesktopTree@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropDesktopTree@Composition@UI@Windows@@QEAAJPEAVCompositor@234@U_LUID@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, _LUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropDesktopTree@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropDesktopTree();
};
} // namespace Windows::UI::Composition
