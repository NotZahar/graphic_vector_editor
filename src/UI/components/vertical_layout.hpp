#ifndef VERTICAL_LAYOUT_H
#define VERTICAL_LAYOUT_H

#include "../layout.hpp"
#include "../component.hpp"

namespace GVEditor {
    class VerticalLayout : public Layout, public Component {
    public:
        VerticalLayout() = default;
        ~VerticalLayout() override = default;
    };
}

#endif // VERTICAL_LAYOUT_H