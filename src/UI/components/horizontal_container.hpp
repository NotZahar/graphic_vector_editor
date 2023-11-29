#ifndef HORIZONTAL_CONTAINER_H
#define HORIZONTAL_CONTAINER_H

#include <UI/component.hpp>
#include <UI/container.hpp>

namespace GVEditor {
    class HorizontalContainer : public Utility::Container, public Utility::Component {
    public:
        HorizontalContainer() = default;
        ~HorizontalContainer() override = default;
    };
}

#endif // HORIZONTAL_CONTAINER_H