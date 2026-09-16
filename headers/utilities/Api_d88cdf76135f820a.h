#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 3 member(s).
namespace Windows::UI::Composition::Private::VisualReferenceController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@VisualReferenceController@Private@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@456@@Z
    virtual long get_Visual(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Visual@Api@VisualReferenceController@Private@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long put_Visual(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Private::VisualReferenceController
