#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace DirectComposition {
class CD2DSharedBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CD2DSharedBuffer@DirectComposition@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z
    static long Create(unsigned int, ID2D1PrivateCompositorBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferPointer@CD2DSharedBuffer@DirectComposition@@UEAAPEAXXZ
    virtual void * GetBufferPointer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferSize@CD2DSharedBuffer@DirectComposition@@UEAAIXZ
    virtual unsigned int GetBufferSize();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CD2DSharedBuffer@DirectComposition@@IEAA@I@Z
    CD2DSharedBuffer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CD2DSharedBuffer@DirectComposition@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
};
} // namespace DirectComposition
