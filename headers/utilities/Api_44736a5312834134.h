#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 13 member(s).
namespace Windows::UI::Composition::Effects::WhiteNoiseEffect {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEBGPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@3Graphics@6@@Z
    virtual long GetNamedPropertyMapping(unsigned short const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIPropertyValue@Foundation@6@@Z
    virtual long GetProperty(unsigned int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJIPEAPEAUIGraphicsEffectSource@3Graphics@6@@Z
    virtual long GetSource(unsigned int, ::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Frequency@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z
    virtual long get_Frequency(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@6@@Z
    virtual long get_Offset(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Frequency@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z
    virtual long put_Frequency(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Name@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Name(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Offset@Api@WhiteNoiseEffect@Effects@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z
    virtual long put_Offset(WindissectOpaque);
};
} // namespace Windows::UI::Composition::Effects::WhiteNoiseEffect
