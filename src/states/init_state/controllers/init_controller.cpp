#include "init_controller.hpp"

namespace GVEditor {
    InitController::InitController()
        : _welcomeView(std::make_unique<WelcomeView>())
    {
        // impl
    }
}