#ifndef INIT_MODEL_H
#define INIT_MODEL_H

#include <map>
#include <string>

namespace GVEditor {
    class InitModel {
    public:
        InitModel();
        ~InitModel() = default;

        enum menuItem : unsigned int {
            createDoc,
            importDoc,
            exportDoc,
            createShape,
            removeShape,
            exit
        };

        int getWindowWidth() const;
        int getWindowHeight() const;
        const std::map<menuItem, std::string>& getMenu() const;
        
        void setWindowWidth(int width);
        void setWindowHeight(int height);
        void setMenu(const std::map<menuItem, std::string>& menu);

    private:
        int _windowWidth;
        int _windowHeight;
        std::map<menuItem, std::string> _menu;
    };
}

#endif // INIT_MODEL_H