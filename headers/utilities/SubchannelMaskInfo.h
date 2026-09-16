#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
class SubchannelMaskInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaskedOutputType@SubchannelMaskInfo@@SA?AW4DCOMPOSITION_EXPRESSION_TYPE@@IW42@@Z
    static int GetMaskedOutputType(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxMaskIndex@SubchannelMaskInfo@@QEBAIXZ
    unsigned int GetMaxMaskIndex() const;
};
