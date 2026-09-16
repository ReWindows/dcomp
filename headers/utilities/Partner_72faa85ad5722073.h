#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::CompositionVisualSurface {
class Partner {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJXZ
    virtual long Freeze();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Partner@CompositionVisualSurface@Composition@UI@Windows@@QEAA@XZ
    Partner();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RealizationSize@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_RealizationSize(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Stretch@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJPEAW4CompositionStretch@345@@Z
    virtual long get_Stretch(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RealizationSize@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z
    virtual long put_RealizationSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Stretch@Partner@CompositionVisualSurface@Composition@UI@Windows@@UEAAJW4CompositionStretch@345@@Z
    virtual long put_Stretch(int);
};
} // namespace Windows::UI::Composition::CompositionVisualSurface
