#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition {
class RenderingDeviceReplacedEventArgs {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionGraphicsDevice@234@@Z
    long RuntimeClassInitialize(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAA@XZ
    virtual ~RenderingDeviceReplacedEventArgs();
};
} // namespace Windows::UI::Composition
