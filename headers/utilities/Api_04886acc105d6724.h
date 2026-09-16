#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition::CompositionProjectedShadow {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionProjectedShadow@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BlurRadiusMultiplier@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_BlurRadiusMultiplier(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Casters@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCasterCollection@345@@Z
    virtual long get_Casters(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LightSource@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionLight@345@@Z
    virtual long get_LightSource(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxBlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinBlurRadius(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Receivers@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiverUnorderedCollection@345@@Z
    virtual long get_Receivers(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BlurRadiusMultiplier@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_BlurRadiusMultiplier(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LightSource@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAUICompositionLight@345@@Z
    virtual long put_LightSource(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MaxBlurRadius(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinBlurRadius@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MinBlurRadius(float);
};
} // namespace Windows::UI::Composition::CompositionProjectedShadow
