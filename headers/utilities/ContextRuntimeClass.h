#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace Microsoft::WRL2 {
class ContextRuntimeClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ
    void Dispose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkCached@ContextRuntimeClass@WRL2@Microsoft@@QEAAX_N@Z
    void MarkCached(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsingSession_NoLock@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSessionGuardIfNeeded@23@@Z
    long UsingSession_NoLock(::Microsoft::WRL2::ContextSessionGuardIfNeeded *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ContextRuntimeClass@WRL2@Microsoft@@IEAAJ_N@Z
    long Close(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@ContextRuntimeClass@WRL2@Microsoft@@MEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtendedQueryInterface@ContextRuntimeClass@WRL2@Microsoft@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ExtendedQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyObjectResurrected@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void NotifyObjectResurrected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFinalRelease_NoLock@ContextRuntimeClass@WRL2@Microsoft@@MEAAX_N@Z
    virtual void OnFinalRelease_NoLock(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@ContextRuntimeClass@WRL2@Microsoft@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@IEAAJPEAVContextSession@23@@Z
    long RuntimeClassInitialize(::Microsoft::WRL2::ContextSession *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z
    static long ValidateInterface(::Microsoft::WRL2::ContextSession *, IUnknown *, WindissectOpaque const *, ::Microsoft::WRL2::ContextRuntimeClass * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ
    virtual ~ContextRuntimeClass();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferredPostDestroy_NoLock@ContextRuntimeClass@WRL2@Microsoft@@CAJPEAX@Z
    static long DeferredPostDestroy_NoLock(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessDestroyWorkflow@ContextRuntimeClass@WRL2@Microsoft@@AEAAX_NPEA_N@Z
    void ProcessDestroyWorkflow(bool, bool *);
};
} // namespace Microsoft::WRL2
