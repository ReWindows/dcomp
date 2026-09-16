#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition {
class CompositionBackdropBrush {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBlurredWallpaperBackdropBrushSupported@CompositionBackdropBrush@Composition@UI@Windows@@SA_NXZ
    static bool IsBlurredWallpaperBackdropBrushSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionBackdropBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4CompositionBackdropType@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int);
};
} // namespace Windows::UI::Composition
