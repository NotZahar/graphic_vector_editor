#ifndef EDIT_MODEL_H
#define EDIT_MODEL_H

#include <map>
#include <string>

#include "window_model.hpp"

namespace GVEditor {
    class EditModel : public WindowModel {
    public:
        EditModel();
        ~EditModel() override = default;

        enum menuItem : unsigned int {
            createDoc,
            importDoc,
            exportDoc,
            createShape,
            removeShape,
            exit
        };
        
        const std::map<menuItem, std::string>& getMenu() const;
        
        void setMenu(const std::map<menuItem, std::string>& menu);
    
    private:
        std::map<menuItem, std::string> _menu;
    };
}

#endif // EDIT_MODEL_H