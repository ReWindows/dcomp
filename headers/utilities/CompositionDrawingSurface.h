#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace Windows::UI::Composition {
class CompositionDrawingSurface {
public:
    class Api;
    class Interop;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionDrawingSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDrawWithGutters@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@AEBU_GUID@@PEAPEAXPEAUtagPOINT@@PEAUDCOMPOSITION_GUTTERS@@@Z
    long BeginDrawWithGutters(tagRECT const *, _GUID const &, void * *, tagPOINT *, DCOMPOSITION_GUTTERS *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionDrawingSurface@Composition@UI@Windows@@QEAA@XZ
    CompositionDrawingSurface();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEBUtagRECT@@PEAPEAUIDXGISurface@@@Z
    long CopySurface(tagRECT const *, IDXGISurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAUIUnknown@@HHPEBUtagRECT@@@Z
    long CopySurface(IUnknown *, int, int, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidPixels@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAH@Z
    long HasValidPixels(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionDrawingSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@@Z
    long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionDrawingSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@_N5@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int, bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateUnderlying@CompositionDrawingSurface@Composition@UI@Windows@@EEAAJUSizeInt32@Graphics@4@@Z
    virtual long RecreateUnderlying(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z
    long UseUnderlyingSurfacePartner(IDCompositionSurfacePartner * *);
};
} // namespace Windows::UI::Composition
