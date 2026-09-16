#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::CompositionCommitBatch {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionCommitBatch@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAVCompositionBatchCompletedEventArgs@Composition@UI@Windows@@@Foundation@5@PEAUEventRegistrationToken@@@Z
    virtual long add_Completed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsActive@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsActive(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnded@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsEnded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Completed@Api@CompositionCommitBatch@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Completed(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::CompositionCommitBatch
