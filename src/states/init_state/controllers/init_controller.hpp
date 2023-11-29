#ifndef INIT_CONTROLLER_H
#define INIT_CONTROLLER_H

#include <memory>

#include "../models/init_model.hpp"
#include "../../../UI/views/welcome_view.hpp"

namespace GVEditor {
    class InitController {
    public:
        InitController();
        ~InitController() = default;

    private:
        std::unique_ptr<InitModel> _initModel;
        std::unique_ptr<WelcomeView> _welcomeView;
    };
}

#endif // INIT_CONTROLLER_H