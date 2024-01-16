#ifndef EDIT_VIEW_H
#define EDIT_VIEW_H

#include <memory>
#include <unordered_map>

#include <files/file_service.hpp>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"
#include "../../shapes/drawable/dshape.hpp"
#include "../../shapes/drawable/dshape_helper.hpp"

namespace GVEditor {
    class EditView : public View {
    public:
        using FileService = Utility::FileService;

        EditView(const int windowWidth, const int windowHeight);
        ~EditView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);
        void addDShape(const dshapes dshape, const int shapeId);
        void addDShape(const dshapes dshape);
        void removeDShape(const int shapeId);

    // signals:
        void createDocChosen(FileService::path_t /*folderPath*/, std::string /*fileName*/) {};
        void importDocChosen(FileService::path_t /*folderPath*/) {};
        void exportDocChosen() {};
        void createShapeChosen(std::shared_ptr<Shape> /*shape*/, const int /*shapeId*/) {};
        void removeShapeChosen(const int /*shapeId*/) {};
        void exitChosen() {};

    private:
        std::unique_ptr<Window> _mainWindow;
        std::unordered_map<int, std::unique_ptr<DShape>> _dShapes;
    };
}

#endif // EDIT_VIEW_H