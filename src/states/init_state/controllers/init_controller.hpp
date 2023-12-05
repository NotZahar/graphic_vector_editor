#ifndef INIT_CONTROLLER_H
#define INIT_CONTROLLER_H

#include <memory>

#include "../../../models/init_model.hpp"
#include "../../../UI/views/init_view.hpp"

namespace GVEditor {
    class InitController {
    public:
        InitController();
        ~InitController() = default;

    // signals:
        void editStarted() {}
        void cancel() {}

    // private slots:
        void onChoiceMade(Menu::itemKey_t) {/* impl */}

    private:
        std::unique_ptr<InitModel> _initModel;
        std::unique_ptr<InitView> _initView;
    };
}

#endif // INIT_CONTROLLER_H