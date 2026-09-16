#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 5 member(s).
namespace Windows::UI::Composition::AnimationPropertyInfo {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@AnimationPropertyInfo@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedCompositionObject@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJPEAPEAUICompositionObject@345@@Z
    virtual long GetResolvedCompositionObject(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedCompositionObjectProperty@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetResolvedCompositionObjectProperty(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AccessMode@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJPEAW4AnimationPropertyAccessMode@345@@Z
    virtual long get_AccessMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AccessMode@Api@AnimationPropertyInfo@Composition@UI@Windows@@UEAAJW4AnimationPropertyAccessMode@345@@Z
    virtual long put_AccessMode(int);
};
} // namespace Windows::UI::Composition::AnimationPropertyInfo
