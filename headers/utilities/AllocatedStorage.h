#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace CSparseStorage {
class AllocatedStorage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z
    static WindissectOpaque * AllocateStorage(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandStorage@AllocatedStorage@CSparseStorage@@SAXPEAPEAV12@_K@Z
    static void ExpandStorage(WindissectOpaque * *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasData@AllocatedStorage@CSparseStorage@@QEBA_NI@Z
    bool HasData(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAllReferences@AllocatedStorage@CSparseStorage@@QEAAXXZ
    void ReleaseAllReferences();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z
    WindissectOpaque * FindSlot(unsigned int) const;
};
} // namespace CSparseStorage
