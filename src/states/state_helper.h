#ifndef STATE_HELPER_H
#define STATE_HELPER_H

#include <states/state.h>

namespace GVEditor {
    enum states : Utility::State::stateId_t {
        init,
        edit,
        cancel
    };
} 

#endif // STATE_HELPER_H