#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::ImplicitAnimationCollection {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@ImplicitAnimationCollection@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUICompositionAnimationBase@Composition@UI@Windows@@@Collections@Foundation@5@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimationBase@345@PEAE@Z
    virtual long Insert(HSTRING__*, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUICompositionAnimationBase@345@@Z
    virtual long Lookup(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@ImplicitAnimationCollection@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Windows::UI::Composition::ImplicitAnimationCollection
