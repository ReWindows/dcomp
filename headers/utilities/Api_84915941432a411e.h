#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 33 member(s).
namespace Windows::UI::Composition::SpotLight {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SpotLight@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConstantAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_ConstantAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateSpace@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CoordinateSpace(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Direction@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Direction(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InnerConeAngle@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InnerConeAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InnerConeAngleInDegrees@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InnerConeAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InnerConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_InnerConeColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InnerConeIntensity@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_InnerConeIntensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinearAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_LinearAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxAttenuationCutoff@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinAttenuationCutoff@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OuterConeAngle@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_OuterConeAngle(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OuterConeAngleInDegrees@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_OuterConeAngleInDegrees(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OuterConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_OuterConeColor(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OuterConeIntensity@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_OuterConeIntensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuadraticAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_QuadraticAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConstantAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_ConstantAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CoordinateSpace@Api@SpotLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CoordinateSpace(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Direction@Api@SpotLight@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_Direction(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InnerConeAngle@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_InnerConeAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InnerConeAngleInDegrees@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_InnerConeAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InnerConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_InnerConeColor(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InnerConeIntensity@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_InnerConeIntensity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LinearAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_LinearAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxAttenuationCutoff@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MaxAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinAttenuationCutoff@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MinAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@SpotLight@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OuterConeAngle@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_OuterConeAngle(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OuterConeAngleInDegrees@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_OuterConeAngleInDegrees(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OuterConeColor@Api@SpotLight@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_OuterConeColor(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_OuterConeIntensity@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_OuterConeIntensity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuadraticAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_QuadraticAttenuation(float);
};
} // namespace Windows::UI::Composition::SpotLight
