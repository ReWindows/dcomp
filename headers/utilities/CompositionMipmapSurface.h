#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class CompositionMipmapSurface {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionMipmapSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionMipmapSurface@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawingSurfaceForLevel@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJIPEAPEAVCompositionDrawingSurface@234@@Z
    long GetDrawingSurfaceForLevel(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRenderingDeviceChanged@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJXZ
    virtual long NotifyRenderingDeviceChanged();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionMipmapSurface@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionMipmapSurface@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@USizeInt32@Graphics@4@W4DirectXPixelFormat@DirectX@84@W4DirectXAlphaMode@DirectX@84@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, ::Windows::Graphics::SizeInt32, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionMipmapSurface@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionMipmapSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalSurface@CompositionMipmapSurface@Composition@UI@Windows@@EEAAJPEAUICompositionSurface@234@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z
    virtual long MarshalSurface(WindissectOpaque *, WindissectOpaque const *);
};
} // namespace Windows::UI::Composition
