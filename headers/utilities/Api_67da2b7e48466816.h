#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@7@PEAUEventRegistrationToken@@@Z
    virtual long add_EdgyDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AutoRedirectForManipulation@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_AutoRedirectForManipulation(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EdgeId@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EdgeId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AutoRedirectForManipulation@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_AutoRedirectForManipulation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_EdgyDetected@Api@EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_EdgyDetected(EventRegistrationToken);
};
} // namespace Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource
