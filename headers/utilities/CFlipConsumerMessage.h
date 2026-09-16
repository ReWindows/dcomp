#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Flip {
class CFlipConsumerMessage {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z
    static long Create(::Flip::CFlipProducer *, ::Flip::CFlipConsumerMessage * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryReadProperty@CFlipConsumerMessage@Flip@@UEAAJAEBU_GUID@@IPEAPEAX@Z
    virtual long TryReadProperty(_GUID const &, unsigned int, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFlipConsumerMessage@Flip@@EEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z
    long Initialize(::Flip::CFlipProducer *);
};
} // namespace Flip
