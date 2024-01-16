#ifndef STATE_HELPER_H
#define STATE_HELPER_H

#include <states/state.hpp>

namespace GVEditor {
    enum state : Utility::State::stateId_t {
        init,
        edit,
        cancel
    };
} 

#endif // STATE_HELPER_H