#ifndef EDIT_STATE_H
#define EDIT_STATE_H

#include <states/state.hpp>

#include "controllers/edit_controller.hpp"

namespace GVEditor {
    class EditState : public Utility::State {
    public:
        EditState();
        ~EditState() override = default;

        void start() noexcept override;
        void finish() noexcept override;

    // private slots:
        void onCancel();

    private:
        EditController editController;
    };
}

#endif // EDIT_STATE_H