#ifndef WELCOME_VIEW_H
#define WELCOME_VIEW_H

#include <memory>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"

namespace GVEditor {
    class WelcomeView : public View {
    public:
        WelcomeView(const int windowWidth, const int windowHeight);
        ~WelcomeView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);
        void refresh() override;

    // signals:
        void choiceMade(Menu::itemKey_t) {}

    private:
        std::unique_ptr<Window> _mainWindow;
    };
}

#endif // WELCOME_VIEW_H