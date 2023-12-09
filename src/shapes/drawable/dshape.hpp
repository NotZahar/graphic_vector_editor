#ifndef DSHAPE_H
#define DSHAPE_H

#include <memory>

#include "../shape.hpp"

namespace GVEditor {
    class DShape {
    public:
        DShape() = delete;
        explicit DShape(std::shared_ptr<Shape> shape);
        virtual ~DShape() = default;
    
        virtual void draw() const = 0;
        std::shared_ptr<Shape> getShape() const;
        int getId() const;

        inline static constexpr int INVALID_ID = -1;

    private:
        std::shared_ptr<Shape> _shape;
        const int _id;
    };
}

#endif // DSHAPE_H