#include "welcome_view.hpp"

namespace GVEditor {
    WelcomeView::WelcomeView() 
        : _weclomeWindow(std::make_unique<Window>(1280, 720)),
          _menu(std::make_unique<Menu>(
                Menu::items_t{
                    { menuItem::createDoc, Label("Создать новый") },
                    { menuItem::importDoc, Label("Импортировать из ...") },
                    { menuItem::exportDoc, Label("Экспортировать в ...") },
                    { menuItem::createShape, Label("Создать примтив") },
                    { menuItem::removeShape, Label("Удалить примитив") }
                }
            ))
    {
        // impl
    }
}