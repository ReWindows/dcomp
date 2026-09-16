#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace DirectComposition {
class CSharedSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CSharedSection@DirectComposition@@QEAAPEAX_K@Z
    void * Allocate(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z
    static long Create(WindissectOpaque *, bool, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CSharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetType@CSharedSection@DirectComposition@@UEBA?AW4SharedSectionType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedSection@DirectComposition@@UEAA@XZ
    virtual ~CSharedSection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapSharedMemory@CSharedSection@DirectComposition@@CAXPEAXPEAE@Z
    static void UnmapSharedMemory(void *, unsigned char *);
};
} // namespace DirectComposition
