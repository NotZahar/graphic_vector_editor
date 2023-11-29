#ifndef EDIT_CONTROLLER_H
#define EDIT_CONTROLLER_H

#include <memory>

#include "../models/edit_model.hpp"
// #include "../../../UI/views/welcome_view.hpp"

namespace GVEditor {
    class EditController {
    public:
        EditController();
        ~EditController() = default;

    // signals:
        void exitChosen() {}

    // private slots:
        void onExitPressed() {/* impl */}

    private:
        std::unique_ptr<EditModel> _initModel;
        // std::unique_ptr<WelcomeView> _welcomeView;
    };
}

#endif // EDIT_CONTROLLER_H