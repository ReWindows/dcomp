#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Condition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_RestingValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Condition@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Condition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_RestingValue@Api@InteractionTrackerInertiaRestingValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_RestingValue(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaRestingValue
