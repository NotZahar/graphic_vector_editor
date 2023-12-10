#include "edit_controller.hpp"

#include "../../../data/storage.hpp"
#include "../../../serializers/document_serializer.hpp"

namespace GVEditor {
    EditController::EditController()
    {
        // _editModel.setDocument(...);
        // _editView.setLayout(...);
        // connect(view, ..., this, ...)
        // impl
    }

    void EditController::onExportDocChosen() {
        // impl
        
        const auto folderPath = _editModel->getDocument()->getFolderPath();
        const auto fileName = _editModel->getDocument()->getFileName();
        
        DocumentSerializer documentSerializer;
        FileService::writeToFile(
            FileService::makePath(folderPath, fileName), 
            documentSerializer.serialize(_editModel->getDocument())
        );

        // impl
    }

    void EditController::onCreateShapeChosen(std::shared_ptr<Shape> shape, const int shapeId) {
        _editModel->getDocument()->addShape(shape, shapeId);
    }
}