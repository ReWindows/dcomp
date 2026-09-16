#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::CompositionMipmapSurface {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionMipmapSurface@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDrawingSurfaceForLevel@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionDrawingSurface@345@@Z
    virtual long GetDrawingSurfaceForLevel(unsigned int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJPEAW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LevelCount@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_LevelCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelFormat@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJPEAW4DirectXPixelFormat@DirectX@Graphics@5@@Z
    virtual long get_PixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizeInt32@Api@CompositionMipmapSurface@Composition@UI@Windows@@UEAAJPEAUSizeInt32@Graphics@5@@Z
    virtual long get_SizeInt32(::Windows::Graphics::SizeInt32*);
};
} // namespace Windows::UI::Composition::CompositionMipmapSurface
