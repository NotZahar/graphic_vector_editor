#include "line.hpp"

namespace GVEditor {
    Line::Line(Point2 start, Point2 end)
        : _start(start), 
          _end(end)
    {
        // impl
    }

    Point2 Line::getStart() const {
        return _start;
    }

    Point2 Line::getEnd() const {
        return _end;
    }

    void Line::setStart(Point2 startPoint) {
        _start = startPoint;
    }

    void Line::setEnd(Point2 endPoint) {
        _end = endPoint;
    }
}