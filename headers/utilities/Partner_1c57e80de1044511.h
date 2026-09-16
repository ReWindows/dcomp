#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::InteropRemoteAppRenderTarget {
class Partner {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlphaMode@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJW4DXGI_ALPHA_MODE@@@Z
    virtual long SetAlphaMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClearColor@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJAEBU_D3DCOLORVALUE@@@Z
    virtual long SetClearColor(_D3DCOLORVALUE const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOffset@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJAEBUtagPOINT@@@Z
    virtual long SetContentOffset(tagPOINT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHwnd@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long SetHwnd(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJAEBUD2D_SIZE_U@@@Z
    virtual long SetSize(D2D_SIZE_U const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVailDpi@Partner@InteropRemoteAppRenderTarget@Composition@UI@Windows@@UEAAJI@Z
    virtual long SetVailDpi(unsigned int);
};
} // namespace Windows::UI::Composition::InteropRemoteAppRenderTarget
