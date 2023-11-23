#include "../include/state_manager.h"

namespace BigHelper {
    StateManager::StateManager()
        : _currentStateId(INVALID_STATE_ID) 
    {}

    StateManager& StateManager::instance() {
        static StateManager instance;
        return instance;
    }

    bool StateManager::stateExists(stateId_t stateId) const {
        return _states.contains(stateId);
    }

    void StateManager::addNewState(stateId_t newStateId, 
            std::unique_ptr<State> newState) {
        if (stateExists(newStateId))
            return;
        _states.insert({ newStateId, std::move(newState) });
        _currentStateId = newStateId;
    }

    void StateManager::setStateAsCurrent(stateId_t stateId) {
        if (!stateExists(stateId))
            return;
        _currentStateId = stateId;
    }
}
