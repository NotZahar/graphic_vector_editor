#ifndef HORIZONTAL_LAYOUT_H
#define HORIZONTAL_LAYOUT_H

#include "../layout.hpp"
#include "../component.hpp"

namespace GVEditor {
    class HorizontalLayout : public Layout, public Component {
    public:
        HorizontalLayout() = default;
        ~HorizontalLayout() override = default;
    };
}

#endif // HORIZONTAL_LAYOUT_H