#ifndef WINDOW_H
#define WINDOW_H

#include "layout.hpp"

namespace GVEditor {
    class Window {
    public:
        Window() = delete;
        Window(const int width, const int height);
        ~Window() = default;

        void setLayout(std::shared_ptr<Layout> layout);
        std::shared_ptr<Layout> getLayout();

    private:
        int _width;
        int _height;
        std::shared_ptr<Layout> _layout;
    };
}

#endif // WINDOW_H