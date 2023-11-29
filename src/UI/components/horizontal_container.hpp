#ifndef HORIZONTAL_CONTAINER_H
#define HORIZONTAL_CONTAINER_H

#include "../layout.hpp"
#include "../component.hpp"

namespace GVEditor {
    class HorizontalContainer : public Layout, public Component {
    public:
        HorizontalContainer() = default;
        ~HorizontalContainer() override = default;
    };
}

#endif // HORIZONTAL_CONTAINER_H