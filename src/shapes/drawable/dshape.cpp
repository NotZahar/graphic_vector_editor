#include "dshape.hpp"

namespace GVEditor {
    DShape::DShape(std::shared_ptr<Shape> shape)
        : _shape(shape),
          _id(/* uuid() */)
    {
        // impl
    }

    std::shared_ptr<Shape> DShape::getShape() const {
        return _shape;
    }

    int DShape::getId() const {
        return _id;
    }
}