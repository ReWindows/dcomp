#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 30 member(s).
namespace Windows::UI::Composition {
class Compositor {
public:
    class Api;
    class CompositionTextures;
    class Experimental;
    class Internal;
    class LayoutSync;
    class SystemOnly;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Compositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateLuidForHandle@Compositor@Composition@UI@Windows@@QEAAJPEAXPEA_K@Z
    long AllocateLuidForHandle(void *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseLuid@Compositor@Composition@UI@Windows@@QEAAJ_K@Z
    long CloseLuid(uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Compositor@Composition@UI@Windows@@QEAA@XZ
    Compositor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachCompositionHandle@Compositor@Composition@UI@Windows@@QEAAJPEAPEAXPEAPEAUICompositionHandle@Internal@Handles@Foundation@4@@Z
    long CreateAndAttachCompositionHandle(void * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlurredWallpaperBackdropBrush@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionBackdropBrush@234@@Z
    long CreateBlurredWallpaperBackdropBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionTexture@Compositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAPEAUICompositionTexture@234@@Z
    long CreateCompositionTexture(IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHostBackdropBrush@Compositor@Composition@UI@Windows@@QEAAJPEAPEAVCompositionBackdropBrush@234@@Z
    long CreateHostBackdropBrush(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSharedVisualSurface@Compositor@Composition@UI@Windows@@QEAAJUSizeInt32@Graphics@4@_NPEAPEAVCompositionVisualSurface@234@@Z
    long CreateSharedVisualSurface(::Windows::Graphics::SizeInt32, bool, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTargetForCoreWindow@Compositor@Composition@UI@Windows@@QEAAJPEAPEAUICompositionTarget@234@@Z
    long CreateTargetForCoreWindow(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreWindowCI@Compositor@Composition@UI@Windows@@QEAAPEAUICoreWindow_CompositionIslands@Core@34@XZ
    ::Windows::UI::Core::ICoreWindow_CompositionIslands * GetCoreWindowCI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionTexturesLost@Compositor@Composition@UI@Windows@@UEAAXXZ
    virtual void NotifyCompositionTexturesLost();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Compositor@Composition@UI@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Compositor@Composition@UI@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@PEAUIMessageSessionStable@@W4DeviceVersion@DirectComposition@@@Z
    long RuntimeClassInitialize(::Windows::System::IDispatcherQueue *, ::Windows::UI::Core::ICoreWindow *, IUnknown *, WindissectOpaque *, int, IMessageSessionStable *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CompositionTexturesLost@Compositor@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositor@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z
    long add_CompositionTexturesLost(WindissectOpaque *, EventRegistrationToken *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupSession@Compositor@Composition@UI@Windows@@MEAAXXZ
    virtual void CleanupSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDestroy@Compositor@Composition@UI@Windows@@MEAAXXZ
    virtual void PostDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticDisposeItemProc@Compositor@Composition@UI@Windows@@KAJPEAXIIPEBX@Z
    static long StaticDisposeItemProc(void *, unsigned int, unsigned int, void const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Compositor@Composition@UI@Windows@@MEAA@XZ
    virtual ~Compositor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ
    long EnsureBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommitCompleted@Compositor@Composition@UI@Windows@@EEAAXXZ
    virtual void OnCommitCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyReleasePendingSync@Compositor@Composition@UI@Windows@@EEAAXXZ
    virtual void OnDestroyReleasePendingSync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveCommitSyncObject@Compositor@Composition@UI@Windows@@EEAAPEAXPEAX@Z
    virtual void * ResolveCommitSyncObject(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronization@Compositor@Composition@UI@Windows@@AEAAJPEAX@Z
    long SetSynchronization(void *);
};
} // namespace Windows::UI::Composition
