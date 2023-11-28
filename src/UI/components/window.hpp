#ifndef WINDOW_H
#define WINDOW_H

namespace GVEditor {
    class Window {
    public:
        Window() = delete;
        Window(const int width, const int height);
        ~Window() = default;

    private:
        int _width;
        int _height;
    };
}

#endif // WINDOW_H