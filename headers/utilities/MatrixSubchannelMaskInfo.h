#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 2 member(s).
class MatrixSubchannelMaskInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubchannels@MatrixSubchannelMaskInfo@@QEBAGXZ
    unsigned short GetSubchannels() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertMaskElement@MatrixSubchannelMaskInfo@@QEAAJE@Z
    long InsertMaskElement(unsigned char);
};
