#include "edit_model.hpp"

#include "../constants/title_helper.hpp"
#include "../constants/ui_helper.hpp"

namespace GVEditor {
    EditModel::EditModel()
        : WindowModel(UIHelper::windowWidth, UIHelper::windowHeight),
          _menu{
            { menuItem::createDoc, TitleHelper::createDocStr },
            { menuItem::importDoc, TitleHelper::importDocStr },
            { menuItem::exportDoc, TitleHelper::exportDocStr },
            { menuItem::createShape, TitleHelper::createShapeStr },
            { menuItem::removeShape, TitleHelper::removeShapeStr },
            { menuItem::exit, TitleHelper::exitStr }
          }
    {
        // impl
    }
    
    const std::map<EditModel::menuItem, std::string>& EditModel::getMenu() const {
        return _menu;
    }

    void EditModel::setMenu(const std::map<menuItem, std::string>& menu) {
        _menu = menu;
    }
}