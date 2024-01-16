#ifndef INIT_VIEW_H
#define INIT_VIEW_H

#include <memory>

#include <files/file_service.hpp>

#include "view.hpp"
#include "../window.hpp"
#include "../components/menu.hpp"

namespace GVEditor {
    class InitView : public View {
    public:
        using FileService = Utility::FileService;
        
        InitView(const int windowWidth, const int windowHeight);
        ~InitView() override = default;

        void setMainLayout(std::shared_ptr<Layout> layout);

    // signals:
        void createDocChosen(FileService::path_t /*folderPath*/, std::string /*fileName*/) {};
        void importDocChosen(FileService::path_t /*folderPath*/, std::string /*fileName*/) {};
        void exitChosen() {};

    private:
        std::unique_ptr<Window> _mainWindow;
    };
}

#endif // INIT_VIEW_H