#include "window.hpp"

namespace GVEditor {
    Window::Window(const int, const int)
    {
        // impl
    }

    void Window::setLayout(std::shared_ptr<Layout>) {
        // impl
    }
    
    std::shared_ptr<Layout> Window::getLayout() {
        return _layout;
    }
}