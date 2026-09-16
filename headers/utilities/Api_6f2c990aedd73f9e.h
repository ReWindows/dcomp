#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@456@@Z
    virtual long get_Condition(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_NaturalMotion@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUIScalarNaturalMotionAnimation@456@@Z
    virtual long get_NaturalMotion(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Condition@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@456@@Z
    virtual long put_Condition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_NaturalMotion@Api@InteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@UEAAJPEAUIScalarNaturalMotionAnimation@456@@Z
    virtual long put_NaturalMotion(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion
