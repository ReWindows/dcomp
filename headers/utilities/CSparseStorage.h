#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
class CSparseStorage {
public:
    class AllocatedStorage;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReference@CSparseStorage@@QEBAPEAXI@Z
    void * GetReference(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@CSparseStorage@@QEAAXIIPEBX@Z
    void SetData(unsigned int, unsigned int, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z
    void SetReference(unsigned int, void *, WindissectOpaque const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z
    WindissectOpaque & FindSlotForData(unsigned int, unsigned int);
};
