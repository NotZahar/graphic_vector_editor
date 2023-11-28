#ifndef STATE_MANAGER_H
#define STATE_MANAGER_H

#include <memory>
#include <unordered_map>

#include "state.hpp"

namespace Utility {
    class StateManager final {
    public:
        StateManager(const StateManager&) = delete;
        StateManager(StateManager&&) = delete;
        StateManager& operator=(StateManager const&) = delete;
        StateManager& operator=(StateManager &&) = delete;
        
        static StateManager& instance();
        bool stateExists(const State::stateId_t stateId) const;
        void addNewState(std::unique_ptr<State> newState);
        void setStateAsCurrent(const State::stateId_t stateId);
        State::stateId_t getCurrentState() const;

    private:
        StateManager();
        ~StateManager() = default;

    private:
        std::unordered_map<State::stateId_t, std::unique_ptr<State>> _states;
        State::stateId_t _currentStateId;
    };
}

#endif // STATE_MANAGER_H