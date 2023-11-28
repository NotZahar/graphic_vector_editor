#ifndef LABEL_H
#define LABEL_H

#include <string>

namespace GVEditor {
    class Label {
    public:
        Label() = delete;
        explicit Label(const std::string& label);
        ~Label() = default;

    private:
        std::string _label;
    };
}

#endif // LABEL_H