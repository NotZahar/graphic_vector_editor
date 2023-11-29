#ifndef COMPONENT_H
#define COMPONENT_H

namespace GVEditor {
    class Component {
    public:
        Component() = default;
        virtual ~Component() = default;

        bool isVisible() const {
            return _visible;
        }
        
        void setVisible(bool visible) {
            _visible = visible;
        }

    private:
        bool _visible = false;
    };
}

#endif // COMPONENT_H