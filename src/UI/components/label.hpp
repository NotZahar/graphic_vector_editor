#ifndef LABEL_H
#define LABEL_H

#include <string>

#include <UI/component.hpp>

namespace GVEditor {
    class Label : public Utility::Component {
    public:
        Label() = delete;
        explicit Label(const std::string& label);
        ~Label() override = default;

    private:
        std::string _label;
    };
}

#endif // LABEL_H