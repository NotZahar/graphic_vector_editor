#ifndef WELCOME_VIEW_H
#define WELCOME_VIEW_H

#include <memory>

#include "view.hpp"
#include "../components/window.hpp"
#include "../components/label.hpp"

namespace GVEditor {
    class WelcomeView : public View {
    public:
        WelcomeView();
        ~WelcomeView() = default;

    private:
        std::unique_ptr<Window> _weclomeWindow;
        std::unique_ptr<Label> _weclomeLabel;
    };
}

#endif // WELCOME_VIEW_H