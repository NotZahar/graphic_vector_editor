#ifndef EXIT_CONTROLLER_H
#define EXIT_CONTROLLER_H

#include "../../../models/init_model.hpp"
#include "../../../UI/views/init_view.hpp"

namespace GVEditor {
    class ExitController {
    public:
        ExitController();
        ~ExitController() = default;

    // signals:
        void cancel() {}

    // private slots:
        void onExit();
    };
}

#endif // EXIT_CONTROLLER_H