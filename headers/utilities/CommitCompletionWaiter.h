#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition {
class CommitCompletionWaiter {
public:
    class AsyncAction;
    class AsyncInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CommitCompletionWaiter@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ
    CommitCompletionWaiter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CommitCompletionWaiter@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CommitCompletionWaiter@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@CommitCompletionWaiter@Composition@UI@Windows@@QEAAJPEAUIAsyncActionCompletedHandler@Foundation@4@@Z
    long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommitCompletionWaiter@Composition@UI@Windows@@UEAA@XZ
    virtual ~CommitCompletionWaiter();
};
} // namespace Windows::UI::Composition
