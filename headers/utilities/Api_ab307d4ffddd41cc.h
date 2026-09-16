#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositionGeometry {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionGeometry@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimEnd@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_TrimEnd(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimOffset@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_TrimOffset(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TrimStart@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_TrimStart(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimEnd@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_TrimEnd(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimOffset@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_TrimOffset(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TrimStart@Api@CompositionGeometry@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_TrimStart(float);
};
} // namespace Windows::UI::Composition::CompositionGeometry
