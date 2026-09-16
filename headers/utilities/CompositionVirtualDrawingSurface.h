#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 12 member(s).
namespace Windows::UI::Composition {
class CompositionVirtualDrawingSurface {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z
    long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAAJIPEBURectInt32@Graphics@4@@Z
    long Trim(unsigned int, ::Windows::Graphics::RectInt32const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateUnderlying@CompositionVirtualDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z
    virtual long RecreateUnderlying(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseUnderlyingVirtualSurface@CompositionVirtualDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionVirtualSurface@@@Z
    long UseUnderlyingVirtualSurface(IDCompositionVirtualSurface * *);
};
} // namespace Windows::UI::Composition
