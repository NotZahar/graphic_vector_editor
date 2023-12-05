#ifndef TITLE_HELPER_H
#define TITLE_HELPER_H

#include <string>

namespace GVEditor {
    struct TitleHelper {
        static inline const std::string createDocStr = "Создать новый";
        static inline const std::string importDocStr = "Импортировать из ...";
        static inline const std::string exportDocStr = "Экспортировать в ...";
        static inline const std::string createShapeStr = "Создать примтив";
        static inline const std::string removeShapeStr = "Удалить примитив";
        static inline const std::string exitStr = "Выход";
    };
} 

#endif // TITLE_HELPER_H