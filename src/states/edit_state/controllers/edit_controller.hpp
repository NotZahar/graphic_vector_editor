#ifndef EDIT_CONTROLLER_H
#define EDIT_CONTROLLER_H

#include "../../../models/edit_model.hpp"
#include "../../../UI/views/edit_view.hpp"

namespace GVEditor {
    class EditController {
    public:
        using FileService = Utility::FileService;

        EditController();
        ~EditController() = default;

    // signals:
        void exitChosen() {}

    // private slots:
        void onCreateDocChosen(FileService::path_t, std::string) { /*impl*/ };
        void onImportDocChosen(FileService::path_t) { /*impl*/ };
        void onExportDocChosen();
        void onCreateShapeChosen(std::shared_ptr<Shape> shape, const int shapeId);
        void onRemoveShapeChosen(const int /*shapeId*/) { /*impl*/ };
        void onExitChosen() { /*impl*/ };

    private:
        std::unique_ptr<EditModel> _editModel;
        std::unique_ptr<EditView> _editView;
    };
}

#endif // EDIT_CONTROLLER_H