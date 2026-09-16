#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::Vector3NaturalMotionAnimation {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z
    virtual long get_FinalValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z
    virtual long get_InitialValue(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_InitialVelocity(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z
    virtual long put_FinalValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z
    virtual long put_InitialValue(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialVelocity@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_InitialVelocity(WindissectOpaque);
};
} // namespace Windows::UI::Composition::Vector3NaturalMotionAnimation
