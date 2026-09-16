#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace DirectComposition {
class CRemoteAppRenderTargetProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRemoteAppRenderTargetProxy@DirectComposition@@QEAA@I@Z
    CRemoteAppRenderTargetProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJW4DXGI_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClearColor@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long SetClearColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffset@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBUtagPOINT@@@Z
    virtual long SetContentOffset(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHwnd@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJPEAUHWND__@@@Z
    virtual long SetHwnd(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJAEBUD2D_SIZE_U@@@Z
    virtual long SetSize(D2D_SIZE_U const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVailDpi@CRemoteAppRenderTargetProxy@DirectComposition@@UEAAJI@Z
    virtual long SetVailDpi(unsigned int);
};
} // namespace DirectComposition
