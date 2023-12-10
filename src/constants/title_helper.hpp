#ifndef TITLE_HELPER_H
#define TITLE_HELPER_H

#include <string>

namespace GVEditor {
    struct TitleHelper {
        inline static const std::string createDocStr = "Создать новый";
        inline static const std::string importDocStr = "Импортировать из ...";
        inline static const std::string exportDocStr = "Экспортировать в ...";
        inline static const std::string createShapeStr = "Создать примтив";
        inline static const std::string removeShapeStr = "Удалить примитив";
        inline static const std::string exitStr = "Выход";
    };
} 

#endif // TITLE_HELPER_H