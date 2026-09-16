#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::CompositionConditionalValue {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Condition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Value(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Condition@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Condition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Value@Api@CompositionConditionalValue@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Value(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Interactions::CompositionConditionalValue
