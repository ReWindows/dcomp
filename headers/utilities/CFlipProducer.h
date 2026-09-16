#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace Flip {
class CFlipProducer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBufferToPool@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAXU_LUID@@@Z
    virtual long AddBufferToPool(unsigned int, FlipPropertyItem *, void *, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindD3DDevice@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@@Z
    virtual long BindD3DDevice(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFlipProducer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z
    static long Create(void *, ::Flip::CFlipProducer * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContent@CFlipProducer@Flip@@UEAAJIPEAUFlipPropertyItem@@PEAPEAUIFlipContent@@@Z
    virtual long CreateContent(unsigned int, FlipPropertyItem *, IFlipContent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DequeueMessageFromConsumer@CFlipProducer@Flip@@UEAAJPEAPEAUIFlipMessageFromConsumer@@@Z
    virtual long DequeueMessageFromConsumer(IFlipMessageFromConsumer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPoolBufferAvailableEvent@CFlipProducer@Flip@@UEAAJPEAXPEAPEAX@Z
    virtual long GetPoolBufferAvailableEvent(void *, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConsumerConnected@CFlipProducer@Flip@@UEAAJPEA_N@Z
    virtual long IsConsumerConnected(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CFlipProducer@Flip@@UEAAJPEAUIUnknown@@_KPEA_K_NIPEAUFlipPropertyItem@@2@Z
    virtual long Present(IUnknown *, uint64_t, uint64_t *, bool, unsigned int, FlipPropertyItem *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCancel@CFlipProducer@Flip@@UEAAJPEA_K@Z
    virtual long PresentCancel(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryBufferInfo@CFlipProducer@Flip@@UEAAJPEAXPEAW4DXGI_FORMAT@@PEAU_LUID@@@Z
    virtual long QueryBufferInfo(void *, int *, _LUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBufferFromPool@CFlipProducer@Flip@@UEAAJPEAX@Z
    virtual long RemoveBufferFromPool(void *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFlipProducer@Flip@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlipProducer@Flip@@IEAAJPEAXPEAPEAX@Z
    long Initialize(void *, void * *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlipProducer@Flip@@EEAA@XZ
    virtual ~CFlipProducer();
};
} // namespace Flip
