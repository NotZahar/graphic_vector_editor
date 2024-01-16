#ifndef INIT_MODEL_H
#define INIT_MODEL_H

#include <map>
#include <string>

#include "window_model.hpp"

namespace GVEditor {
    class InitModel : public WindowModel {
    public:
        InitModel();
        ~InitModel() override = default;

        enum menuItem : unsigned int {
            createDoc,
            importDoc,
            exportDoc,
            exit
        };

        const std::map<menuItem, std::string>& getMenu() const;
        void setMenu(const std::map<menuItem, std::string>& menu);

    private:
        std::map<menuItem, std::string> _menu;
    };
}

#endif // INIT_MODEL_H