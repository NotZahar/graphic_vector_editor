#include "dshape.hpp"

namespace GVEditor {
    DShape::DShape(std::shared_ptr<Shape> shape)
        : _shape(shape)
    {
        // impl
    }

    std::shared_ptr<Shape> DShape::getShape() const {
        return _shape;
    }
}