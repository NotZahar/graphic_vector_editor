#ifndef EDIT_VIEW_H
#define EDIT_VIEW_H

#include <memory>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"

namespace GVEditor {
    class EditView : public View {
    public:
        EditView(const int windowWidth, const int windowHeight);
        ~EditView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);

    // signals:
        void choiceMade(Menu::itemKey_t) {}

    private:
        std::unique_ptr<Window> _mainWindow;
    };
}

#endif // EDIT_VIEW_H