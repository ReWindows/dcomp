#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::Internal::HolographicCompositionDisplay {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DebugOverlayMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJPEAW4DebugOverlayFlags@3456@@Z
    virtual long get_DebugOverlayMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJPEAW4HolographicDisplayIdleMode@3456@@Z
    virtual long get_IdleMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DebugOverlayMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4DebugOverlayFlags@3456@@Z
    virtual long put_DebugOverlayMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IdleMode@Api@HolographicCompositionDisplay@Internal@Composition@UI@Windows@@UEAAJW4HolographicDisplayIdleMode@3456@@Z
    virtual long put_IdleMode(int);
};
} // namespace Windows::UI::Composition::Internal::HolographicCompositionDisplay
