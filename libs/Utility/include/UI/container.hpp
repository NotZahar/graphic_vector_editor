#ifndef CONTAINER_H
#define CONTAINER_H

#include <map>
#include <memory>

#include "component.hpp"

namespace Utility {
    class Container {
    public:
        Container() = default;
        virtual ~Container() = default;

        void addComponent(std::unique_ptr<Component> component);
        void removeComponent(unsigned int componentKey);

    protected:
        std::map<unsigned int, std::unique_ptr<Component>> _components;
    };
}

#endif // CONTAINER_H