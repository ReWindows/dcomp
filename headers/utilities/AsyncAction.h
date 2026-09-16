#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::CommitCompletionWaiter {
class AsyncAction {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ
    AsyncAction();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetResults@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJXZ
    virtual long GetResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@5@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAUIAsyncActionCompletedHandler@Foundation@5@@Z
    virtual long put_Completed(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CommitCompletionWaiter
