#ifndef LINE_H
#define LINE_H

#include "shape.hpp"

namespace GVEditor {
    class Line : public Shape {
    public:
        Line() = delete;
        Line(Point2 start, Point2 end);
        ~Line() override = default;

        Point2 getStart() const;
        Point2 getEnd() const;
        void setStart(Point2 startPoint);
        void setEnd(Point2 endPoint);

    private:
        Point2 _start;
        Point2 _end;
    };
}

#endif // LINE_H