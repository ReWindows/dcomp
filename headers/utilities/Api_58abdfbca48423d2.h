#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Internal::SuperWetInkVisual {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSuperWetInkSource@3456@@Z
    virtual long get_SuperWetInkSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAUICompositionSuperWetInkSource@3456@@Z
    virtual long put_SuperWetInkSource(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Internal::SuperWetInkVisual
