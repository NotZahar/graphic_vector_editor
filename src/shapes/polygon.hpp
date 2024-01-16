#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

#include "shape.hpp"

namespace GVEditor {
    class Polygon : public Shape {
    public:
        Polygon() = delete;
        Polygon(std::vector<Point2>&& vertices);
        ~Polygon() override = default;

        std::vector<Point2> getVertices() const;
        void setVertices(std::vector<Point2>&& vertices);

    private:
        std::vector<Point2> _vertices;
    };
}

#endif // POLYGON_H