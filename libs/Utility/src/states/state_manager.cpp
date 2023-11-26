#include "../include/states/state_manager.h"

namespace Utility {
    StateManager::StateManager()
        : _currentStateId(State::INVALID_STATE_ID) 
    {}

    StateManager& StateManager::instance() {
        static StateManager instance;
        return instance;
    }

    bool StateManager::stateExists(const State::stateId_t stateId) const {
        return _states.contains(stateId);
    }

    void StateManager::addNewState(std::unique_ptr<State> newState) {
        const auto newStateId = newState->getStateId();
        if (stateExists(newStateId))
            return;
        _states.insert({ newStateId, std::move(newState) });
    }

    void StateManager::setStateAsCurrent(const State::stateId_t stateId) {
        if (!stateExists(stateId))
            return;
        _currentStateId = stateId;
    }

    State::stateId_t StateManager::getCurrentState() const {
        return _currentStateId;
    }
}
