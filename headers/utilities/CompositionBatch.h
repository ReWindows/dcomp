#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 14 member(s).
namespace Windows::UI::Composition {
class CompositionBatch {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionBatch@Composition@UI@Windows@@QEAA@XZ
    CompositionBatch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionBatch@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CompositionBatch@Composition@UI@Windows@@QEAAJXZ
    long End();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@CompositionBatch@Composition@UI@Windows@@QEAAJXZ
    long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionBatch@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVBatchController@234@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Suspend@CompositionBatch@Composition@UI@Windows@@QEAAJXZ
    long Suspend();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@CompositionBatch@Composition@UI@Windows@@QEAAJUEventRegistrationToken@@@Z
    long remove_Completed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionBatch@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionBatch();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckCompleted@CompositionBatch@Composition@UI@Windows@@AEAA_NXZ
    bool CheckCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletion_Callback@CompositionBatch@Composition@UI@Windows@@AEAAXXZ
    void FireCompletion_Callback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOnOwningThread@CompositionBatch@Composition@UI@Windows@@AEAAJXZ
    long ValidateOnOwningThread();
};
} // namespace Windows::UI::Composition
