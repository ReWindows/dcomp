#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4CompositionBitmapInterpolationMode@456@@Z
    virtual long get_BitmapInterpolationMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@456@@Z
    virtual long get_Surface(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneWrappingMode@3456@@Z
    virtual long get_WrappingUMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAW4SceneWrappingMode@3456@@Z
    virtual long get_WrappingVMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BitmapInterpolationMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4CompositionBitmapInterpolationMode@456@@Z
    virtual long put_BitmapInterpolationMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Surface@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJPEAUICompositionSurface@456@@Z
    virtual long put_Surface(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WrappingUMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z
    virtual long put_WrappingUMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_WrappingVMode@Api@SceneSurfaceMaterialInput@Scenes@Composition@UI@Windows@@UEAAJW4SceneWrappingMode@3456@@Z
    virtual long put_WrappingVMode(int);
};
} // namespace Windows::UI::Composition::Scenes::SceneSurfaceMaterialInput
