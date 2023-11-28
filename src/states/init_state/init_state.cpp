#include "init_state.hpp"

#include "../state_helper.hpp"
#include "controllers/init_controller.hpp"

namespace GVEditor {
    InitState::InitState() 
        : Utility::State(state::init),
          initController()
    {
        // impl
    }

    void InitState::start() noexcept {
        // impl
    }

    void InitState::finish() noexcept {
        // impl
    }
}
