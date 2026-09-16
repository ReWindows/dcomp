#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::CommitCompletionWaiter {
class AsyncInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@QEAA@XZ
    AsyncInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ErrorCode@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAJ@Z
    virtual long get_ErrorCode(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Id(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@AsyncInfo@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAW4AsyncStatus@Foundation@5ABI@@@Z
    virtual long get_Status(int *);
};
} // namespace Windows::UI::Composition::CommitCompletionWaiter
