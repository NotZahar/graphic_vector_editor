#include <states/state_manager.h>

#include "states/init_state/init_state.h"
#include "states/state_helper.h"

int main() {
    auto& stateManager = Utility::StateManager::instance();
    stateManager.addNewState(std::make_unique<GVEditor::InitState>());
    stateManager.setStateAsCurrent(GVEditor::states::init);

    return 0;
}