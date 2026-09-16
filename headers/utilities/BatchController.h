#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition {
class BatchController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BatchController@Composition@UI@Windows@@QEAA@XZ
    BatchController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScopedBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionScopedBatch@234@@Z
    void CreateScopedBatch(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeliverCompletions_Callback@BatchController@Composition@UI@Windows@@QEAAXXZ
    void DeliverCompletions_Callback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentCycleBatch@BatchController@Composition@UI@Windows@@QEAAXPEAPEAVCompositionCommitBatch@234@@Z
    void GetCurrentCycleBatch(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchCompletedAgain@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z
    void NotifyBatchCompletedAgain(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchEnded@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@_N1@Z
    void NotifyBatchEnded(WindissectOpaque *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBatchResumed@BatchController@Composition@UI@Windows@@QEAAXPEAVCompositionBatch@234@@Z
    void NotifyBatchResumed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@BatchController@Composition@UI@Windows@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BatchController@Composition@UI@Windows@@QEAA@XZ
    ~BatchController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearList@BatchController@Composition@UI@Windows@@AEAAXAEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@@Z
    void ClearList(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBatchSet@BatchController@Composition@UI@Windows@@AEAAXPEAPEAUBatchSet@234@PEAPEAVCompositionBatch@234@@Z
    void CreateBatchSet(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateCurrentScopedSet@BatchController@Composition@UI@Windows@@AEAAXXZ
    void InvalidateCurrentScopedSet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MigrateBatch@BatchController@Composition@UI@Windows@@AEAAXPEAVCompositionBatch@234@PEAV?$RefPtr@VCompositionBatch@Composition@UI@Windows@@@WRL2@Microsoft@@W4BatchState@234@@Z
    void MigrateBatch(WindissectOpaque *, WindissectOpaque *, int);
};
} // namespace Windows::UI::Composition
