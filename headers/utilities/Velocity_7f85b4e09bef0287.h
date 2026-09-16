#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadow {
class Velocity {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Velocity@CompositionProjectedShadow@Composition@UI@Windows@@QEAA@XZ
    Velocity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxOpacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinOpacity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OpacityFalloff@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_OpacityFalloff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MaxOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MinOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OpacityFalloff@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_OpacityFalloff(float);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadow
