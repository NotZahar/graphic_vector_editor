#ifndef INIT_CONTROLLER_H
#define INIT_CONTROLLER_H

#include <memory>

#include <files/file_service.hpp>

#include "../../../models/init_model.hpp"
#include "../../../UI/views/init_view.hpp"

namespace GVEditor {
    class InitController {
    public:
        using FileService = Utility::FileService;

        InitController();
        ~InitController() = default;

    // signals:
        void editStarted() {}
        void cancel() {}

    // private slots:
        void onCreateDocChosen(FileService::path_t, std::string) { /*impl*/ }
        void onImportDocChosen(FileService::path_t) { /*impl*/ }
        void onExportDocChosen(FileService::path_t, FileService::bytes_t) { /*impl*/ }
        void onExitDocChosen() { /*impl*/ }

    private:
        std::unique_ptr<InitModel> _initModel;
        std::unique_ptr<InitView> _initView;
    };
}

#endif // INIT_CONTROLLER_H