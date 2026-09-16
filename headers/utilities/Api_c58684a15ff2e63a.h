#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::CompositionVirtualDrawingSurface {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resize@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUSizeInt32@Graphics@5@@Z
    virtual long Resize(::Windows::Graphics::SizeInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@@Z
    virtual long Scroll(::Windows::Graphics::PointInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRect@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z
    virtual long ScrollRect(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollRectWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@1@Z
    virtual long ScrollRectWithClip(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollWithClip@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJUPointInt32@Graphics@5@URectInt32@75@@Z
    virtual long ScrollWithClip(::Windows::Graphics::PointInt32, ::Windows::Graphics::RectInt32);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Trim@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJIPEAURectInt32@Graphics@5@@Z
    virtual long Trim(unsigned int, ::Windows::Graphics::RectInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelFormat@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAW4DirectXPixelFormat@DirectX@Graphics@5@@Z
    virtual long get_PixelFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUSize@Foundation@5@@Z
    virtual long get_Size(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SizeInt32@Api@CompositionVirtualDrawingSurface@Composition@UI@Windows@@UEAAJPEAUSizeInt32@Graphics@5@@Z
    virtual long get_SizeInt32(::Windows::Graphics::SizeInt32*);
};
} // namespace Windows::UI::Composition::CompositionVirtualDrawingSurface
