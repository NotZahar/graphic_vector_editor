#include "exit_state.hpp"

#include "../state_helper.hpp"
#include "states/state_manager.hpp"

namespace GVEditor {
    ExitState::ExitState() 
        : Utility::State(state::cancel),
          exitController()
    {
        // connect(controller, ..., this, ...)
        // impl
    }

    void ExitState::start() noexcept {
        // impl
    }

    void ExitState::finish() noexcept {
        // impl
    }

    void ExitState::onCancel() {
        Utility::StateManager::instance().onFinish();
    }
}
