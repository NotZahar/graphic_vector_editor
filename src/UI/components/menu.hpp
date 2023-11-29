#ifndef MENU_H
#define MENU_H

#include <map>
#include <memory>

#include "label.hpp"

namespace GVEditor {
    class Menu : public Utility::Component {
    public:
        using itemKey_t = unsigned int;
        using items_t = std::map<itemKey_t, Label>;

        Menu() = delete;
        explicit Menu(const items_t& menuItems);
        ~Menu() override = default;

    private:
        items_t _items;
    };
}

#endif // MENU_H