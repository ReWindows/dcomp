#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::ScalarNaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z
    virtual long get_FinalValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@M@Foundation@5@@Z
    virtual long get_InitialValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialVelocity@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InitialVelocity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@5@@Z
    virtual long put_FinalValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialValue@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@M@Foundation@5@@Z
    virtual long put_InitialValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialVelocity@Api@ScalarNaturalMotionAnimation@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_InitialVelocity(float);
};
} // namespace Windows::UI::Composition::ScalarNaturalMotionAnimation
