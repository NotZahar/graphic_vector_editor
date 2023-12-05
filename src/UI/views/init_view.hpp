#ifndef INIT_VIEW_H
#define INIT_VIEW_H

#include <memory>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"

namespace GVEditor {
    class InitView : public View {
    public:
        InitView(const int windowWidth, const int windowHeight);
        ~InitView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);

    // signals:
        void choiceMade(Menu::itemKey_t) {}

    private:
        std::unique_ptr<Window> _mainWindow;
    };
}

#endif // INIT_VIEW_H