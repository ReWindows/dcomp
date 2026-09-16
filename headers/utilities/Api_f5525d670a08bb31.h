#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositionTexture {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionTexture@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AlphaMode@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long get_AlphaMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ColorSpace@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAW4DirectXColorSpace@DirectX@Graphics@5@@Z
    virtual long get_ColorSpace(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJPEAURectInt32@Graphics@5@@Z
    virtual long get_SourceRect(::Windows::Graphics::RectInt32*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AlphaMode@Api@CompositionTexture@Composition@UI@Windows@@UEAAJW4DirectXAlphaMode@DirectX@Graphics@5@@Z
    virtual long put_AlphaMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ColorSpace@Api@CompositionTexture@Composition@UI@Windows@@UEAAJW4DirectXColorSpace@DirectX@Graphics@5@@Z
    virtual long put_ColorSpace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SourceRect@Api@CompositionTexture@Composition@UI@Windows@@UEAAJURectInt32@Graphics@5@@Z
    virtual long put_SourceRect(::Windows::Graphics::RectInt32);
};
} // namespace Windows::UI::Composition::CompositionTexture
