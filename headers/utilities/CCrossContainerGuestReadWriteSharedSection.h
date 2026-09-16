#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CCrossContainerGuestReadWriteSharedSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@SAJPEAVCDevice@2@_KPEAPEAV12@@Z
    static long Create(WindissectOpaque *, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEBA?AW4SharedSectionType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrossContainerGuestReadWriteSharedSection@DirectComposition@@UEAA@XZ
    virtual ~CCrossContainerGuestReadWriteSharedSection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapSharedMemory@CCrossContainerGuestReadWriteSharedSection@DirectComposition@@CAXPEAE@Z
    static void UnmapSharedMemory(unsigned char *);
};
} // namespace DirectComposition
