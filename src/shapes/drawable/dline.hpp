#ifndef DLINE_H
#define DLINE_H

#include <memory>

#include "dshape.hpp"
#include "../line.hpp"

namespace GVEditor {
    class DLine : public DShape {
    public:
        DLine() = delete;
        DLine(std::shared_ptr<Line> line);
        ~DLine() override = default;

        virtual void draw() const override;
    };
}

#endif // DLINE_H