#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Condition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Motion(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Condition@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Condition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Motion@Api@InteractionTrackerInertiaMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Motion(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaMotion
