#include "window.hpp"

namespace GVEditor {
    Window::Window(const int, const int)
    {
        // impl
    }

    void Window::setContainer(std::shared_ptr<Utility::Container>) {
        // impl
    }
    
    std::shared_ptr<Utility::Container> Window::getContainer() {
        return _container;
    }
}