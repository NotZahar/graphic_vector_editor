#include "edit_view.hpp"

namespace GVEditor {
    EditView::EditView(const int, const int)
    {
        // impl
    }

    void EditView::setMainLayout(std::shared_ptr<Layout> layout) {
        _mainWindow->setLayout(layout);
    }
}