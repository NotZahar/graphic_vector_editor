#ifndef DPOLYGON_H
#define DPOLYGON_H

#include <memory>

#include "dshape.hpp"
#include "../polygon.hpp"

namespace GVEditor {
    class DPolygon : public DShape {
    public:
        DPolygon() = delete;
        DPolygon(std::shared_ptr<Polygon> line);
        ~DPolygon() override = default;

        virtual void draw() const override;
    };
}

#endif // DPOLYGON_H