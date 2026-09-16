#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::Interactions::InteractionSourceConfiguration {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionXSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJPEAW4InteractionSourceRedirectionMode@3456@@Z
    virtual long get_PositionXSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PositionYSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJPEAW4InteractionSourceRedirectionMode@3456@@Z
    virtual long get_PositionYSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScaleSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJPEAW4InteractionSourceRedirectionMode@3456@@Z
    virtual long get_ScaleSourceMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionXSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z
    virtual long put_PositionXSourceMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PositionYSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z
    virtual long put_PositionYSourceMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScaleSourceMode@Api@InteractionSourceConfiguration@Interactions@Composition@UI@Windows@@UEAAJW4InteractionSourceRedirectionMode@3456@@Z
    virtual long put_ScaleSourceMode(int);
};
} // namespace Windows::UI::Composition::Interactions::InteractionSourceConfiguration
