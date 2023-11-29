#ifndef VERTICAL_CONTAINER_H
#define VERTICAL_CONTAINER_H

#include "../layout.hpp"
#include "../component.hpp"

namespace GVEditor {
    class VerticalContainer : public Layout, public Component {
    public:
        VerticalContainer() = default;
        ~VerticalContainer() override = default;
    };
}

#endif // VERTICAL_CONTAINER_H