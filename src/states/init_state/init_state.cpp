#include "init_state.hpp"

#include "../state_helper.hpp"
#include "states/state_manager.hpp"
#include "../../data/storage.hpp"

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

    void InitState::onEditStarted(Utility::FileService::path_t folderPath, std::string fileName, bool newDocFlag) {
        Storage::instance().setCurrentFolderPath(folderPath);
        Storage::instance().setCurrentFileName(fileName);
        Storage::instance().setCurrentNewDocFlag(newDocFlag);
        Utility::StateManager::instance().setStateAsCurrent(GVEditor::state::edit);
    }

    void InitState::onCancel() {
        Utility::StateManager::instance().setStateAsCurrent(GVEditor::state::cancel);
    }
}
