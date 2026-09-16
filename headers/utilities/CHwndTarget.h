#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 9 member(s).
namespace DirectComposition {
class CHwndTarget {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHwndTarget@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHwndTarget@DirectComposition@@QEAA@XZ
    CHwndTarget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHwnd@CHwndTarget@DirectComposition@@UEBAPEAUHWND__@@XZ
    virtual HWND__* GetHwnd() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceHandle@CHwndTarget@DirectComposition@@UEBAIXZ
    virtual unsigned int GetResourceHandle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitWindow@CHwndTarget@DirectComposition@@QEAAJPEAUHWND__@@W4_HwndTargetType@@PEAPEAX@Z
    long InitWindow(HWND__*, int, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHwndTarget@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHwndTarget@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRoot@CHwndTarget@DirectComposition@@UEAAJPEAUIDCompositionVisual@@@Z
    virtual long SetRoot(IDCompositionVisual *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHwndTarget@DirectComposition@@IEAA@XZ
    ~CHwndTarget();
};
} // namespace DirectComposition
