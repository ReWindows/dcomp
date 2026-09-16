#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Core::CompositorController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositorController@Core@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePreviousCommitCompletedAsync@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@6@@Z
    virtual long EnsurePreviousCommitCompletedAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@6@PEAUEventRegistrationToken@@@Z
    virtual long add_CommitNeeded(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Compositor@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJPEAPEAUICompositor@456@@Z
    virtual long get_Compositor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CommitNeeded@Api@CompositorController@Core@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CommitNeeded(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::Core::CompositorController
