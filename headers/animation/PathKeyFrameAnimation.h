#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 10 member(s).
namespace Windows::UI::Composition {
class PathKeyFrameAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertPathKeyFrame@PathKeyFrameAnimation@Composition@UI@Windows@@QEAAJMPEAVCompositionPath@234@PEAVCompositionEasingFunction@234@@Z
    long InsertPathKeyFrame(float, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalTypeSpecificData@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJIPEAPEAVKeyFrameAnimationResources@234@@Z
    virtual long MarshalTypeSpecificData(unsigned int, WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PathKeyFrameAnimation@Composition@UI@Windows@@QEAA@XZ
    PathKeyFrameAnimation();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@PathKeyFrameAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PathKeyFrameAnimation@Composition@UI@Windows@@UEAA@XZ
    virtual ~PathKeyFrameAnimation();
};
} // namespace Windows::UI::Composition
