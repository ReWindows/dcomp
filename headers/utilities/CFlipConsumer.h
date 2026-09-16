#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 22 member(s).
namespace Flip {
class CFlipConsumer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CFlipConsumer@Flip@@SAJPEAXPEAPEAV12@PEAPEAX@Z
    static long Create(void *, ::Flip::CFlipConsumer * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchPresent@CFlipConsumer@Flip@@UEAAJPEAUIFlipPresentCallback@@@Z
    virtual long DispatchPresent(IFlipPresentCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z
    virtual long HoldPoolBuffer(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProducerConnected@CFlipConsumer@Flip@@UEAAJPEA_N@Z
    virtual long IsProducerConnected(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageToProducer@CFlipConsumer@Flip@@UEAAJIPEAUFlipPropertyItem@@@Z
    virtual long PostMessageToProducer(unsigned int, FlipPropertyItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z
    virtual long ReturnPoolBuffer(IUnknown *, uint64_t, IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSynchronizationContext@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@@Z
    long EnsureSynchronizationContext(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIUnknown@@_KPEAI@Z
    IUnknown * GetBufferForIdNoRef(uint64_t, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z
    IFlipContentCallback * GetContentCallbackForIdNoRef(uint64_t, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z
    long GetIdForBuffer(IUnknown *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CFlipConsumer@Flip@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlipConsumer@Flip@@IEAAJPEAXPEAPEAX@Z
    long Initialize(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddBuffer@@@Z
    long ProcessAddBuffer(IFlipPresentCallback *, unsigned char * &, FlipResourceUpdateCommandAddBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddContent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandAddContent@@@Z
    long ProcessAddContent(IFlipPresentCallback *, unsigned char * &, FlipResourceUpdateCommandAddContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPresent@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@IPEAEAEAVCFlipPropertySet@2@@Z
    long ProcessPresent(IFlipPresentCallback *, unsigned int, unsigned char *, ::Flip::CFlipPropertySet &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveBuffer@CFlipConsumer@Flip@@IEAAJPEAUIFlipPresentCallback@@AEAPEAEPEAUFlipResourceUpdateCommandRemoveBuffer@@@Z
    long ProcessRemoveBuffer(IFlipPresentCallback *, unsigned char * &, FlipResourceUpdateCommandRemoveBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent@@@Z
    long ProcessRemoveContent(unsigned char * &, FlipResourceUpdateCommandRemoveContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent@@@Z
    long ProcessUpdateContent(unsigned char * &, FlipResourceUpdateCommandUpdateContent *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlipConsumer@Flip@@AEAA@XZ
    CFlipConsumer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlipConsumer@Flip@@EEAA@XZ
    virtual ~CFlipConsumer();
};
} // namespace Flip
