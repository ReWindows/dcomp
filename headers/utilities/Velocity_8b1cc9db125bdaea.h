#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadowReceiver {
class Velocity {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAA@XZ
    Velocity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAW4CompositionProjectedShadowDrawOrder@345@@Z
    virtual long get_DrawOrder(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAPEAUICompositionBrush@345@@Z
    virtual long get_Mask(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DrawOrder@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJW4CompositionProjectedShadowDrawOrder@345@@Z
    virtual long put_DrawOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Mask@Velocity@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUICompositionBrush@345@@Z
    virtual long put_Mask(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadowReceiver
