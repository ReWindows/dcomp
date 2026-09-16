#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
class CPresentationBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPresentationBuffer@@SAJPEAVCPresentationManager@@PEAUIUnknown@@_KPEAPEAV1@@Z
    static long Create(CPresentationManager *, IUnknown *, uint64_t, CPresentationBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableEvent@CPresentationBuffer@@UEAAJPEAPEAX@Z
    virtual long GetAvailableEvent(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAvailable@CPresentationBuffer@@UEAAJPEAE@Z
    virtual long IsAvailable(unsigned char *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPresentationBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPresentationBuffer@@IEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPresentationBuffer@@MEAA@XZ
    virtual ~CPresentationBuffer();
};
