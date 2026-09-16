#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long Hide(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowMemoryUsage@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long ShowMemoryUsage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOverdraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@W4CompositionDebugOverdrawContentKinds@3456@@Z
    virtual long ShowOverdraw(WindissectOpaque *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRedraw@Api@CompositionDebugHeatMaps@Diagnostics@Composition@UI@Windows@@UEAAJPEAUIVisual@456@@Z
    virtual long ShowRedraw(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Diagnostics::CompositionDebugHeatMaps
