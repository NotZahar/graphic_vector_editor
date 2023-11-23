#ifndef INIT_STATE_H
#define INIT_STATE_H

#include <state.h>

namespace GVEditor {
    // TODO: must be singleton
    class InitState : public BigHelper::State {
    public:
        InitState();
        ~InitState() override = default;
    };
}

#endif // INIT_STATE_H