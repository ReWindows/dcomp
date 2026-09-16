#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 7 member(s).
namespace Flip {
class CFlipContent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFlipContent@Flip@@SAJPEAVCFlipProducer@2@_KIPEAUFlipPropertyItem@@PEAPEAV12@@Z
    static long Create(::Flip::CFlipProducer *, uint64_t, unsigned int, FlipPropertyItem *, ::Flip::CFlipContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBufferAndProperties@CFlipContent@Flip@@UEAAJPEAXIPEAUFlipPropertyItem@@@Z
    virtual long UpdateBufferAndProperties(void *, unsigned int, FlipPropertyItem *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFlipContent@Flip@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlipContent@Flip@@IEAAJIPEAUFlipPropertyItem@@@Z
    long Initialize(unsigned int, FlipPropertyItem *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlipContent@Flip@@EEAA@XZ
    virtual ~CFlipContent();
};
} // namespace Flip
