#ifndef CANVAS_H
#define CANVAS_H

namespace GVEditor {
    class Canvas {
    public:
        Canvas() = delete;
        Canvas(const int width, const int height);
        ~Canvas() = default;

    private:
        int _width;
        int _height;
    };
}

#endif // CANVAS_H