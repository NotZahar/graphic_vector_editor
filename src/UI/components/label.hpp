#ifndef LABEL_H
#define LABEL_H

#include <string>

namespace GVEditor {
    class Label {
    public:
        Label() = delete;
        Label(const int width, const int height);
        ~Label() = default;

    private:
        std::string _label;
    };
}

#endif // LABEL_H