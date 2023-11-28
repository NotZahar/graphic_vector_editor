#include "../include/states/state.hpp"

namespace Utility {
    State::State(const stateId_t stateId)
        : _stateId(stateId)
    {}

    State::stateId_t State::getStateId() const {
        return _stateId;
    }
}