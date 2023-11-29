#include <states/state_manager.hpp>

#include "states/init_state/init_state.hpp"
#include "states/state_helper.hpp"

int main() {
    auto& stateManager = Utility::StateManager::instance();
    stateManager.addNewState(std::make_unique<GVEditor::InitState>());
    // stateManager.addNewState(std::make_unique<GVEditor::InitState>());
    // stateManager.addNewState(std::make_unique<GVEditor::InitState>());
    stateManager.setStateAsCurrent(GVEditor::state::init);

    return 0;
}