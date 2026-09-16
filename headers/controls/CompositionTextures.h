#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
namespace Windows::UI::Composition::Compositor {
class CompositionTextures {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCompositionTextureSupport@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAH@Z
    virtual long CheckCompositionTextureSupport(IUnknown *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionTexture@CompositionTextures@Compositor@Composition@UI@Windows@@UEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@345@@Z
    virtual long CreateCompositionTexture(IUnknown *, WindissectOpaque * *);
};
} // namespace Windows::UI::Composition::Compositor
