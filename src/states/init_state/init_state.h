#ifndef INIT_STATE_H
#define INIT_STATE_H

#include <states/state.h>

namespace GVEditor {
    class InitState : public Utility::State {
    public:
        InitState();
        ~InitState() override = default;
    };
}

#endif // INIT_STATE_H