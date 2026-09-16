#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 8 member(s).
namespace Windows::UI::Composition::Desktop {
class DesktopWindowTarget {
public:
    class Internal;
    class Partner;
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DesktopWindowTarget@Desktop@Composition@UI@Windows@@UEAA@XZ
    virtual ~DesktopWindowTarget();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputSink@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAPEAX@Z
    long CreateInputSink(void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAA@XZ
    DesktopWindowTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DesktopWindowTarget@Desktop@Composition@UI@Windows@@IEAAJPEAVCompositor@345@@Z
    long RuntimeClassInitialize(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::Desktop
