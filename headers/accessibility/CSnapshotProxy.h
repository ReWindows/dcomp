#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace DirectComposition {
class CSnapshotProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSnapshotProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSnapshotProxy@DirectComposition@@QEAA@I@Z
    CSnapshotProxy(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSnapshotProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSnapshotProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace DirectComposition
