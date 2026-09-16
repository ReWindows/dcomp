#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace Windows::UI::Composition::PointLight {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@PointLight@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Color@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUColor@45@@Z
    virtual long get_Color(::Windows::UI::Color *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConstantAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_ConstantAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CoordinateSpace@Api@PointLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisual@345@@Z
    virtual long get_CoordinateSpace(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Intensity@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_Intensity(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinearAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_LinearAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MaxAttenuationCutoff@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MaxAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_MinAttenuationCutoff@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_MinAttenuationCutoff(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuadraticAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_QuadraticAttenuation(float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Color@Api@PointLight@Composition@UI@Windows@@UEAAJUColor@45@@Z
    virtual long put_Color(::Windows::UI::Color);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ConstantAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_ConstantAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CoordinateSpace@Api@PointLight@Composition@UI@Windows@@UEAAJPEAUIVisual@345@@Z
    virtual long put_CoordinateSpace(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Intensity@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_Intensity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LinearAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_LinearAttenuation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MaxAttenuationCutoff@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MaxAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_MinAttenuationCutoff@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_MinAttenuationCutoff(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@PointLight@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z
    virtual long put_Offset(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuadraticAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z
    virtual long put_QuadraticAttenuation(float);
};
} // namespace Windows::UI::Composition::PointLight
