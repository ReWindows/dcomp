#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::StepEasingFunction {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@StepEasingFunction@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FinalStep@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_FinalStep(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialStep@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_InitialStep(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsFinalStepSingleFrame@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsFinalStepSingleFrame(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsInitialStepSingleFrame@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAE@Z
    virtual long get_IsInitialStepSingleFrame(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StepCount@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJPEAH@Z
    virtual long get_StepCount(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_FinalStep@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJH@Z
    virtual long put_FinalStep(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InitialStep@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJH@Z
    virtual long put_InitialStep(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsFinalStepSingleFrame@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsFinalStepSingleFrame(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsInitialStepSingleFrame@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJE@Z
    virtual long put_IsInitialStepSingleFrame(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_StepCount@Api@StepEasingFunction@Composition@UI@Windows@@UEAAJH@Z
    virtual long put_StepCount(int);
};
} // namespace Windows::UI::Composition::StepEasingFunction
