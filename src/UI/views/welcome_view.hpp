#ifndef WELCOME_VIEW_H
#define WELCOME_VIEW_H

#include <memory>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"

namespace GVEditor {
    class WelcomeView : public View {
    public:
        WelcomeView();
        ~WelcomeView() override = default;

    private:
        std::unique_ptr<Window> _weclomeWindow;
        std::unique_ptr<Menu> _menu;
    };
}

#endif // WELCOME_VIEW_H