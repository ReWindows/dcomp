#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 4 member(s).
namespace Windows::UI::Composition::CompositionEffectFactory {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrush@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAPEAUICompositionEffectBrush@345@@Z
    virtual long CreateBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExtendedError@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAJ@Z
    virtual long get_ExtendedError(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LoadStatus@Api@CompositionEffectFactory@Composition@UI@Windows@@UEAAJPEAW4CompositionEffectFactoryLoadStatus@345@@Z
    virtual long get_LoadStatus(int *);
};
} // namespace Windows::UI::Composition::CompositionEffectFactory
