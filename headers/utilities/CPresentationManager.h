#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 43 member(s).
class CPresentationManager {
public:
    class CPresentParametersInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z
    bool AddBuffer(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBufferFromResource@CPresentationManager@@UEAAJPEAUIUnknown@@PEAPEAUIPresentationBuffer@@@Z
    virtual long AddBufferFromResource(IUnknown *, IPresentationBuffer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPresentationManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowTearing@CPresentationManager@@UEAAJE@Z
    virtual long AllowTearing(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelPresentsFrom@CPresentationManager@@UEAAJ_K@Z
    virtual long CancelPresentsFrom(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CPresentationManager@@SAJPEAUIUnknown@@PEAPEAV1@@Z
    static long Create(IUnknown *, CPresentationManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresentationSurface@CPresentationManager@@UEAAJPEAXPEAPEAUIPresentationSurface@@@Z
    virtual long CreatePresentationSurface(void *, IPresentationSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePresentStatisticsKind@CPresentationManager@@UEAAJW4PresentStatisticsKind@@E@Z
    virtual long EnablePresentStatisticsKind(int, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteCommandListsAndPresent@CPresentationManager@@UEAAJPEAUID3D12CommandQueue@@IPEBQEAUID3D12CommandList@@@Z
    virtual long ExecuteCommandListsAndPresent(ID3D12CommandQueue *, unsigned int, ID3D12CommandList * const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompositionTexturesLost@CPresentationManager@@UEAAXXZ
    virtual void ForceCompositionTexturesLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceVSyncInterrupt@CPresentationManager@@UEAAJE@Z
    virtual long ForceVSyncInterrupt(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableSignalValueForLastPresent@CPresentationManager@@UEAA_KXZ
    virtual uint64_t GetAvailableSignalValueForLastPresent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z
    CPresentationSurface * GetContentForResourceId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLostEvent@CPresentationManager@@UEAAJPEAPEAX@Z
    virtual long GetLostEvent(void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextPresentId@CPresentationManager@@UEAA_KXZ
    virtual uint64_t GetNextPresentId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z
    virtual long GetNextPresentStatistics(IPresentStatistics * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentRetiringFence@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPresentRetiringFence(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresentStatisticsAvailableEvent@CPresentationManager@@UEAAJPEAPEAX@Z
    virtual long GetPresentStatisticsAvailableEvent(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PollPresentProgress@CPresentationManager@@UEAAJPEAX@Z
    virtual long PollPresentProgress(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Present@CPresentationManager@@UEAAJXZ
    virtual long Present();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPresentationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPresentationManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z
    void RemoveBuffer(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredPresentDuration@CPresentationManager@@UEAAJUSystemInterruptTime@@0@Z
    virtual long SetPreferredPresentDuration(SystemInterruptTime, SystemInterruptTime);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyncId@CPresentationManager@@UEAAX_K@Z
    virtual void SetSyncId(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetTime@CPresentationManager@@UEAAJUSystemInterruptTime@@@Z
    virtual long SetTargetTime(SystemInterruptTime);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressPreviousPresentVSyncInterrupts@CPresentationManager@@UEAAJXZ
    virtual long SuppressPreviousPresentVSyncInterrupts();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrFindInterface@CPresentationManager@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long HrFindInterface(_GUID const &, void * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPresentationManager@@AEAA@XZ
    CPresentationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckLostEvent@CPresentationManager@@AEAAJXZ
    long CheckLostEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPresentationManager@@AEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPresentationManager@@EEAA@XZ
    virtual ~CPresentationManager();
};
