#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
class ParameterEntry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMatrixValue@ParameterEntry@@QEAAXXZ
    void ClearMatrixValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureReferenceCleared@ParameterEntry@@QEAAXPEAVContextSession@WRL2@Microsoft@@@Z
    void EnsureReferenceCleared(::Microsoft::WRL2::ContextSession *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMatrix4x4@ParameterEntry@@QEAAXAEBUMatrix4x4@Numerics@Foundation@Windows@@@Z
    void SetMatrix4x4(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScalar@ParameterEntry@@QEAAXM@Z
    void SetScalar(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParameterEntry@@QEAA@XZ
    ~ParameterEntry();
};
