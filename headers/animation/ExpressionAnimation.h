#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 11 member(s).
namespace Windows::UI::Composition {
class ExpressionAnimation {
public:
    class Api;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ExpressionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ExpressionAnimation@Composition@UI@Windows@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ
    ExpressionAnimation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetExpression(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OriginateError@ExpressionAnimation@Composition@UI@Windows@@SAXPEAUExpressionErrorInfo@234@PEBG@Z
    static void OriginateError(WindissectOpaque *, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ExpressionAnimation@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ExpressionAnimation@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpression@ExpressionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z
    long SetExpression(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpressionAnimation@Composition@UI@Windows@@UEAA@XZ
    virtual ~ExpressionAnimation();
};
} // namespace Windows::UI::Composition
