#include "app.hpp"

#include <states/state_manager.hpp>

#include "states/init_state/init_state.hpp"
#include "states/edit_state/edit_state.hpp"
#include "states/exit_state/exit_state.hpp"
#include "states/state_helper.hpp"

namespace GVEditor {
    App::App()
    {
        auto& stateManager = Utility::StateManager::instance();
        stateManager.addNewState(std::make_unique<GVEditor::InitState>());
        stateManager.addNewState(std::make_unique<GVEditor::EditState>());
        stateManager.addNewState(std::make_unique<GVEditor::ExitState>());
        // connect(stateManager, finish, loop, endExec);
    }

    App::~App()
    {
        // impl
    }

    void App::run() {
        // EventLoop loop;
        auto& stateManager = Utility::StateManager::instance();
        stateManager.setStateAsCurrent(GVEditor::state::init);
        // loop.exec();
    }
}