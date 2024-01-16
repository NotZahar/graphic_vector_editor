#ifndef SHAPE_H
#define SHAPE_H

namespace GVEditor {
    struct Point2 {
        double x;
        double y;
    };

    class Shape {
    public:
        Shape() = default;
        virtual ~Shape() = default;
    };
}

#endif // SHAPE_H