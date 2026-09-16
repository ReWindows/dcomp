#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 19 member(s).
namespace DirectComposition {
class CInteractionProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInteractionProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long AddSupportedInteraction(IDCompositionInteractionConfigurationPartner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long AllowDescendantConfiguration(IDCompositionInteractionConfigurationPartner *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionProxy@DirectComposition@@QEAA@I@Z
    CInteractionProxy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CapturePointer@CInteractionProxy@DirectComposition@@UEAAJI@Z
    virtual long CapturePointer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableBuffering@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long DisableBuffering(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableInputTransparency@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long EnableInputTransparency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnablePalmRejection@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long EnablePalmRejection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProhibitDescendantConfiguration@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long ProhibitDescendantConfiguration(IDCompositionInteractionConfigurationPartner *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInteractionProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInteractionProxy@DirectComposition@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSupportedInteraction@CInteractionProxy@DirectComposition@@UEAAJPEAUIDCompositionInteractionConfigurationPartner@@@Z
    virtual long RemoveSupportedInteraction(IDCompositionInteractionConfigurationPartner *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultConfiguration@CInteractionProxy@DirectComposition@@UEAAJXZ
    virtual long SetDefaultConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDmanipInputSource@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long SetDmanipInputSource(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFallbackHandler@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long SetFallbackHandler(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputSink@CInteractionProxy@DirectComposition@@UEAAJPEAX@Z
    virtual long SetInputSink(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInteractionTrackerInputSource@CInteractionProxy@DirectComposition@@UEAAJH@Z
    virtual long SetInteractionTrackerInputSource(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceHelper@CInteractionProxy@DirectComposition@@IEAAJAEBU_GUID@@PEAPEAXPEAX@Z
    long QueryInterfaceHelper(_GUID const &, void * *, void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z
    long _ProcessSupportedInteractionConfigurationChange(IDCompositionInteractionConfigurationPartner *, int);
};
} // namespace DirectComposition
