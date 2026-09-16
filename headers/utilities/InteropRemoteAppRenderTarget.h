#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class InteropRemoteAppRenderTarget {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAA@XZ
    InteropRemoteAppRenderTarget();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@_NPEAX1@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUHWND__@@AEBUtagRECT@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, HWND__*, tagRECT const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAA@XZ
    virtual ~InteropRemoteAppRenderTarget();
};
} // namespace Windows::UI::Composition
