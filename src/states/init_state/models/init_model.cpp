#include "init_model.hpp"

namespace GVEditor {
    InitModel::InitModel()
        : _windowWidth(1280),
          _windowHeight(720),
          _menu{
            { menuItem::createDoc, "Создать новый" },
            { menuItem::importDoc, "Импортировать из ..." },
            { menuItem::exportDoc, "Экспортировать в ..." },
            { menuItem::createShape, "Создать примтив" },
            { menuItem::removeShape, "Удалить примитив" }
          }
    {
        // impl
    }

    int InitModel::getWindowWidth() const {
        return _windowWidth;
    }

    int InitModel::getWindowHeight() const {
        return _windowHeight;
    }
    
    const std::map<InitModel::menuItem, std::string>& InitModel::getMenu() const {
        return _menu;
    }
    
    void InitModel::setWindowWidth(int width) {
        _windowWidth = width;
    }
    
    void InitModel::setWindowHeight(int height) {
        _windowHeight = height;
    }

    void InitModel::setMenu(const std::map<menuItem, std::string>& menu) {
        _menu = menu;
    }
}