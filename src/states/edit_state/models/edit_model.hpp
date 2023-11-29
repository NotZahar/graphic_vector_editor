#ifndef EDIT_MODEL_H
#define EDIT_MODEL_H

#include <map>
#include <string>

namespace GVEditor {
    class EditModel {
    public:
        EditModel();
        ~EditModel() = default;

        enum menuItem : unsigned int {
            createDoc,
            importDoc,
            exportDoc,
            createShape,
            removeShape,
            exit
        };

    private:
        int _windowWidth;
        int _windowHeight;
        std::map<menuItem, std::string> _menu;
    };
}

#endif // EDIT_MODEL_H