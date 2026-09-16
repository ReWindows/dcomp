#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::InitialValueExpressionCollection {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@InitialValueExpressionCollection@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Collections@Foundation@5@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@0PEAE@Z
    virtual long Insert(HSTRING__*, HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z
    virtual long Lookup(HSTRING__*, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Remove(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@Api@InitialValueExpressionCollection@Composition@UI@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
};
} // namespace Windows::UI::Composition::InitialValueExpressionCollection
