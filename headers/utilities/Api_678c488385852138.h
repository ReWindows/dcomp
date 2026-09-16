#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 6 member(s).
namespace Windows::UI::Composition::InitialValueExpressionCollectionMapView {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@InitialValueExpressionCollectionMapView@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Windows::UI::Composition::InitialValueExpressionCollectionMapView
