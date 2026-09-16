#pragma once
#include "../windissect_forwards.h"

// Reconstructed from dcomp.dll by Windissect. 16 member(s).
namespace Windows::UI::Composition::CompositionObject {
class Api {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Api@CompositionObject@Composition@UI@Windows@@QEAA@XZ
    Api();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulatePropertyInfo@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUIAnimationPropertyInfo@345@@Z
    virtual long PopulatePropertyInfo(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimation@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@@Z
    virtual long StartAnimation(HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationGroup@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@345@@Z
    virtual long StartAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartAnimationWithController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAUICompositionAnimation@345@PEAUIAnimationController@345@@Z
    virtual long StartAnimationWithController(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long StopAnimation(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimationGroup@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUICompositionAnimationBase@345@@Z
    virtual long StopAnimationGroup(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetAnimationController@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIAnimationController@345@@Z
    virtual long TryGetAnimationController(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Comment@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Comment(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Compositor@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICompositor@345@@Z
    virtual long get_Compositor(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Dispatcher@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICoreDispatcher@Core@45@@Z
    virtual long get_Dispatcher(::Windows::UI::Core::ICoreDispatcher * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DispatcherQueue@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@5@@Z
    virtual long get_DispatcherQueue(::Windows::System::IDispatcherQueue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUIImplicitAnimationCollection@345@@Z
    virtual long get_ImplicitAnimations(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@345@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Comment@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Comment(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ImplicitAnimations@Api@CompositionObject@Composition@UI@Windows@@UEAAJPEAUIImplicitAnimationCollection@345@@Z
    virtual long put_ImplicitAnimations(WindissectOpaque *);
};
} // namespace Windows::UI::Composition::CompositionObject
