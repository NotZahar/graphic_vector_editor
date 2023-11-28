#include "welcome_view.hpp"

namespace GVEditor {
    WelcomeView::WelcomeView() 
        : _weclomeWindow(std::make_unique<Window>(1280, 720))
    {
        // impl
    }
}