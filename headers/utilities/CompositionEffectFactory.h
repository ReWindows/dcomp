#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 15 member(s).
namespace Windows::UI::Composition {
class CompositionEffectFactory {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CompositionEffectFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionEffectFactory@Composition@UI@Windows@@QEAA@XZ
    CompositionEffectFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBrush@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAPEAVCompositionEffectBrush@234@@Z
    long CreateBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CompositionEffectFactory@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Message_CompilationFailed@CompositionEffectFactory@Composition@UI@Windows@@QEAAJJPEBG@Z
    long Message_CompilationFailed(long, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CompositionEffectFactory@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CompositionEffectFactory@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionEffectFactory@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAUIGraphicsEffect@Effects@Graphics@4@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@4@@Z
    long RuntimeClassInitialize(WindissectOpaque *, ::Windows::Graphics::Effects::IGraphicsEffect *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionEffectFactory@Composition@UI@Windows@@UEAA@XZ
    virtual ~CompositionEffectFactory();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMessageCallType@CompositionEffectFactory@Composition@UI@Windows@@MEAAPEBUMsgCallTypeDefinition@@XZ
    virtual MsgCallTypeDefinition const * GetMessageCallType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRegisterCallbackId@CompositionEffectFactory@Composition@UI@Windows@@MEAA_NXZ
    virtual bool ShouldRegisterCallbackId();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteLoadResults@CompositionEffectFactory@Composition@UI@Windows@@AEAAXXZ
    void CompleteLoadResults();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ
    long MarshalEffectDescription();
};
} // namespace Windows::UI::Composition
