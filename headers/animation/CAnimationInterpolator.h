#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
class CAnimationInterpolator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetAnimationValue(int64_t, float *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z
    bool GetInterpolatedValue(int64_t, float *, bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z
    bool EnsureHandoffCachedData(float, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z
    bool FindCurrentPrimitive(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z
    bool GetAdjustedHandoffValue(int64_t, float, int, float, uint64_t, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z
    DwmAnimationPrimitive const * GetPrimitiveAtIndex(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z
    float InterpolateCubic(DwmAnimationPrimitive const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z
    float InterpolateSinusoidal(DwmAnimationPrimitive const &, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z
    int64_t TransformTime(DwmAnimationPrimitive const &, int64_t);
};
