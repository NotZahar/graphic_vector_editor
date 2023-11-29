#include "init_state.hpp"

#include "../state_helper.hpp"
#include "states/state_manager.hpp"

namespace GVEditor {
    InitState::InitState() 
        : Utility::State(state::init),
          initController()
    {
        // connect(controller, ..., this, ...)
        // impl
    }

    void InitState::start() noexcept {
        // impl
    }

    void InitState::finish() noexcept {
        // impl
    }

    void InitState::onEditStarted() {
        Utility::StateManager::instance().setStateAsCurrent(GVEditor::state::edit);
    }

    void onCancel() {
        Utility::StateManager::instance().setStateAsCurrent(GVEditor::state::cancel);
    }
}
