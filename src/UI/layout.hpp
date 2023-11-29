#ifndef LAYOUT_H
#define LAYOUT_H

#include <map>
#include <memory>

#include "component.hpp"

namespace GVEditor {
    class Layout {
    public:
        Layout() = default;
        virtual ~Layout() = default;

        void addComponent(std::unique_ptr<Component> component);
        void removeComponent(unsigned int componentKey);

    protected:
        std::map<unsigned int, std::unique_ptr<Component>> _components;
    };
}

#endif // LAYOUT_H