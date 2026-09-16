#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 21 member(s).
namespace Windows::UI::Composition::Private {
class TransformInformation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TransformInformation@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@TransformInformation@Private@Composition@UI@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PE Export
    // Symbol: ?InternalGetTrustLevel@TransformInformation@Private@Composition@UI@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TransformInformation@Private@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransformInformation@Private@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUHWND__@@@Z
    virtual long RuntimeClassInitialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplaySizePhysicalPixels@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_DisplaySizePhysicalPixels(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScreenPhysicalPixelsToHimetricScaleFactor@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector2@Numerics@Foundation@5@@Z
    virtual long get_ScreenPhysicalPixelsToHimetricScaleFactor(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsRotation@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAUVector3@Numerics@Foundation@5@@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsRotation(WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualRelativePixelsToScreenPhysicalPixelsScale@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAM@Z
    virtual long get_VisualRelativePixelsToScreenPhysicalPixelsScale(float *);
};
} // namespace Windows::UI::Composition::Private
