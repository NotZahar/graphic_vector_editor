#include "init_view.hpp"

namespace GVEditor {
    InitView::InitView(const int, const int)
    {
        // impl
    }

    void InitView::setMainLayout(std::shared_ptr<Layout> layout) {
        _mainWindow->setLayout(layout);
    }
}