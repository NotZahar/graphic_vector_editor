#ifndef VERTICAL_CONTAINER_H
#define VERTICAL_CONTAINER_H

#include <UI/component.hpp>
#include <UI/container.hpp>

namespace GVEditor {
    class VerticalContainer : public Utility::Container, public Utility::Component {
    public:
        VerticalContainer() = default;
        ~VerticalContainer() override = default;
    };
}

#endif // VERTICAL_CONTAINER_H