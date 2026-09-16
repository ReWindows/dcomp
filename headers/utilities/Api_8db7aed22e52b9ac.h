#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::AnimationController {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@AnimationController@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pause@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ
    virtual long Pause();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resume@Api@AnimationController@Composition@UI@Windows@@UEAAJXZ
    virtual long Resume();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PlaybackRate@Api@AnimationController@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_PlaybackRate(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@Api@AnimationController@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Progress(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProgressBehavior@Api@AnimationController@Composition@UI@Windows@@UEAAJPEAW4AnimationControllerProgressBehavior@345@@Z
    virtual long get_ProgressBehavior(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PlaybackRate@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_PlaybackRate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Progress(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProgressBehavior@Api@AnimationController@Composition@UI@Windows@@UEAAJW4AnimationControllerProgressBehavior@345@@Z
    virtual long put_ProgressBehavior(int);
};
} // namespace Windows::UI::Composition::AnimationController
