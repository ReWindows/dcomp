#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CCrossContainerHostReadOnlySharedSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Allocate@CCrossContainerHostReadOnlySharedSection@DirectComposition@@QEAAJ_KPEAPEAVCCrossContainerHostReadOnlySharedAllocation@2@@Z
    long Allocate(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CCrossContainerHostReadOnlySharedSection@DirectComposition@@SAJPEAVCDevice@2@_KAEBU_GUID@@2PEAPEAV12@@Z
    static long Create(WindissectOpaque *, uint64_t, _GUID const &, _GUID const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAAXPEAVCSharedAllocationBase@2@@Z
    virtual void Free(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEBA?AW4SharedSectionType@2@XZ
    virtual int GetType() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrossContainerHostReadOnlySharedSection@DirectComposition@@UEAA@XZ
    virtual ~CCrossContainerHostReadOnlySharedSection();
};
} // namespace DirectComposition
