#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::Internal::CompositionDynamicTexture {
class Api {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTexture@Api@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionTexture@456@@Z
    virtual long SetTexture(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextureWithDirtyRects@Api@CompositionDynamicTexture@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionTexture@456@IPEAURectInt32@Graphics@6@@Z
    virtual long SetTextureWithDirtyRects(WindissectOpaque *, unsigned int, ::Windows::Graphics::RectInt32*);
};
} // namespace Windows::UI::Composition::Internal::CompositionDynamicTexture
