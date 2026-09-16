#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 29 member(s).
namespace DirectComposition {
class CAnimationInstance {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CAnimationInstance@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAnimationInstance@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CAnimationInstance@DirectComposition@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CAnimationInstance@DirectComposition@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z
    virtual long AddTimeEvent(double, void ( *)(void *), void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAnimationInstance@DirectComposition@@QEAA@XZ
    CAnimationInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CAnimationInstance@DirectComposition@@SAJPEAVCDevice@2@PEAVCAnimationBuilder@2@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CAnimationInstance@DirectComposition@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandoffData@CAnimationInstance@DirectComposition@@UEAA_NPEAW4Enum@DwmAnimationHandoffType@@PEAMPEA_K@Z
    virtual bool GetHandoffData(int *, float *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitive@CAnimationInstance@DirectComposition@@UEAAPEBUDwmAnimationPrimitive@@I@Z
    virtual DwmAnimationPrimitive const * GetPrimitive(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrimitivesCount@CAnimationInstance@DirectComposition@@UEAA_KXZ
    virtual uint64_t GetPrimitivesCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQPCFrequency@CAnimationInstance@DirectComposition@@UEAA_KXZ
    virtual uint64_t GetQPCFrequency();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CAnimationInstance@DirectComposition@@UEAAJPEAM@Z
    virtual long GetValue(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CAnimationInstance@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z
    long Message_TimeEvent(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@CAnimationInstance@DirectComposition@@UEAAJXZ
    virtual long Pause();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAnimationInstance@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAnimationInstance@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CAnimationInstance@DirectComposition@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTimeEvents@CAnimationInstance@DirectComposition@@UEAAJXZ
    virtual long ResetTimeEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CAnimationInstance@DirectComposition@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CAnimationInstance@DirectComposition@@UEAAJN@Z
    virtual long Seek(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CAnimationInstance@DirectComposition@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCallbackId@CAnimationInstance@DirectComposition@@AEAAJXZ
    long EnsureCallbackId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAnimationInstance@DirectComposition@@AEAAJPEAVCDevice@2@PEAVCAnimationBuilder@2@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseProxiedCallbackId@CAnimationInstance@DirectComposition@@AEAAXXZ
    void ReleaseProxiedCallbackId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAnimationInstance@DirectComposition@@EEAA@XZ
    virtual ~CAnimationInstance();
};
} // namespace DirectComposition
