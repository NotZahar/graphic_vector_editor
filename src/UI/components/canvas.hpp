#ifndef CANVAS_H
#define CANVAS_H

#include "../component.hpp"

namespace GVEditor {
    class Canvas : public Component {
    public:
        Canvas() = delete;
        Canvas(const int width, const int height);
        ~Canvas() override = default;

    private:
        int _width;
        int _height;
    };
}

#endif // CANVAS_H