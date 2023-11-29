#include "welcome_view.hpp"

namespace GVEditor {
    WelcomeView::WelcomeView(const int, const int)
    {
        // impl
    }

    void WelcomeView::setMainLayout(std::shared_ptr<Layout> layout) {
        _mainWindow->setLayout(layout);
    }

    void WelcomeView::refresh() {
        // impl
    }
}