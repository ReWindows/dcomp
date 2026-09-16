#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 27 member(s).
namespace Windows::UI::Composition::Internal {
class CaptureControllerBase {
public:
    class Partner;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CaptureControllerBase@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CaptureControllerBase@Internal@Composition@UI@Windows@@QEAA@XZ
    CaptureControllerBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CaptureControllerBase@Internal@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComponentTransform@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJXZ
    long EnsureComponentTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAAEBUVector2@Numerics@Foundation@5@XZ
    WindissectOpaque & GetAnchorPoint() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ
    float GetRotationAngle() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEBAMXZ
    float GetRotationAngleInDegrees() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CaptureControllerBase@Internal@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CaptureControllerBase@Internal@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJPEAVCompositor@345@_NPEAX1@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool, void *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector2@Numerics@Foundation@5@@Z
    long SetAnchorPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCenterPoint@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@@Z
    long SetCenterPoint(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentSize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXAEBUVector2@Numerics@Foundation@5@@Z
    void SetContentSize(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultSDRBoost@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXM@Z
    void SetDefaultSDRBoost(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCapturing@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z
    void SetIsCapturing(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsConstrainedBySize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAX_N@Z
    void SetIsConstrainedBySize(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@@Z
    long SetOffset(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReferenceVisual@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z
    void SetReferenceVisual(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXPEAVVisual@345@@Z
    void SetRoot(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngle@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngle(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRotationAngleInDegrees@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJM@Z
    long SetRotationAngleInDegrees(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScale@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@5@@Z
    long SetScale(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformMatrix@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAJAEBUMatrix4x4@Numerics@Foundation@5@@Z
    long SetTransformMatrix(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CaptureControllerBase@Internal@Composition@UI@Windows@@UEAA@XZ
    virtual ~CaptureControllerBase();
};
} // namespace Windows::UI::Composition::Internal
