#include "edit_state.hpp"

#include "../state_helper.hpp"
#include "states/state_manager.hpp"

namespace GVEditor {
    EditState::EditState() 
        : Utility::State(state::edit),
          editController()
    {
        // connect(controller, ..., this, ...)
        // impl
    }

    void EditState::start() noexcept {
        // impl
    }

    void EditState::finish() noexcept {
        // impl
    }

    void EditState::onExitChosen() {
        Utility::StateManager::instance().setStateAsCurrent(GVEditor::state::cancel);
    }
}
