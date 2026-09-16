#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadowReceiver {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionProjectedShadowReceiver@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReceivingVisual@Api@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_ReceivingVisual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ReceivingVisual@Api@CompositionProjectedShadowReceiver@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_ReceivingVisual(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadowReceiver
