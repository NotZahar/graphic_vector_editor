#ifndef EXIT_STATE_H
#define EXIT_STATE_H

#include <states/state.hpp>

#include "controllers/exit_controller.hpp"

namespace GVEditor {
    class ExitState : public Utility::State {
    public:
        ExitState();
        ~ExitState() override = default;

        void start() noexcept override;
        void finish() noexcept override;

    // signals:
        void exit() {}

    // private slots:
        void onCancel();

    private:
        ExitController exitController;
    };
}

#endif // EXIT_STATE_H