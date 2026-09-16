#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionLight {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionLight@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExclusionsFromTargets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z
    virtual long get_ExclusionsFromTargets(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Targets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z
    virtual long get_Targets(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsEnabled@Api@CompositionLight@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsEnabled(unsigned char);
};
} // namespace Windows::UI::Composition::CompositionLight
