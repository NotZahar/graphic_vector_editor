#ifndef WINDOW_H
#define WINDOW_H

#include <UI/container.hpp>

namespace GVEditor {
    class Window {
    public:
        Window() = delete;
        Window(const int width, const int height);
        ~Window() = default;

        void setContainer(std::shared_ptr<Utility::Container> container);
        std::shared_ptr<Utility::Container> getContainer();

    private:
        int _width;
        int _height;
        std::shared_ptr<Utility::Container> _container;
    };
}

#endif // WINDOW_H