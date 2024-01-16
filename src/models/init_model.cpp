#include "init_model.hpp"

#include "../constants/title_helper.hpp"
#include "../constants/ui_helper.hpp"

namespace GVEditor {
    InitModel::InitModel()
        : WindowModel(UIHelper::windowWidth, UIHelper::windowHeight),
          _menu{
            { menuItem::createDoc, TitleHelper::createDocStr },
            { menuItem::importDoc, TitleHelper::importDocStr },
            { menuItem::exportDoc, TitleHelper::exportDocStr },
            { menuItem::exit, TitleHelper::exitStr }
          }
    {
        // impl
    }
    
    const std::map<InitModel::menuItem, std::string>& InitModel::getMenu() const {
        return _menu;
    }
    
    void InitModel::setMenu(const std::map<menuItem, std::string>& menu) {
        _menu = menu;
    }
}