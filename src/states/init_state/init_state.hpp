#ifndef INIT_STATE_H
#define INIT_STATE_H

#include <states/state.hpp>

#include "controllers/init_controller.hpp"

namespace GVEditor {
    class InitState : public Utility::State {
    public:
        InitState();
        ~InitState() override = default;

        void start() noexcept override;
        void finish() noexcept override;

    // private slots:
        void onEditStarted(Utility::FileService::path_t /*folderPath*/, std::string /*fileName*/, bool /*newDocFlag*/);
        void onCancel();

    private:
        InitController initController;
    };
}

#endif // INIT_STATE_H