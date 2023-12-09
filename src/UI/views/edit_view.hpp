#ifndef EDIT_VIEW_H
#define EDIT_VIEW_H

#include <memory>

#include <files/file_service.hpp>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"
#include "../../shapes/drawable/dshape.hpp"

namespace GVEditor {
    class EditView : public View {
    public:
        using FileService = Utility::FileService;

        EditView(const int windowWidth, const int windowHeight);
        ~EditView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);

    // signals:
        void createDocChosen(FileService::path_t, std::string) {};
        void importDocChosen(FileService::path_t) {};
        void exportDocChosen(FileService::path_t, FileService::bytes_t) {};
        void createShapeChosen(std::unique_ptr<DShape> /* dshape */) {};
        void removeShapeChosen(const int /* dshapeId */) {};
        void exitDocChosen() {};

    private:
        std::unique_ptr<Window> _mainWindow;
    };
}

#endif // EDIT_VIEW_H