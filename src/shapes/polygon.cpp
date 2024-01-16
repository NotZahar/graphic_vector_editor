#include "polygon.hpp"

namespace GVEditor {
    Polygon::Polygon(std::vector<Point2>&& vertices)
        : _vertices(std::move(vertices))
    {
        // impl
    }

    std::vector<Point2> Polygon::getVertices() const {
        return _vertices;
    }

    void Polygon::setVertices(std::vector<Point2>&& vertices) {
        _vertices = std::move(vertices);
    }
}