#ifndef STATEMANAGER_H
#define STATEMANAGER_H

#include <memory>
#include <unordered_map>

#include "state.h"

namespace BigHelper {
    class StateManager final {
    public:
        using stateId_t = int;

        StateManager(const StateManager&) = delete;
        StateManager(StateManager&&) = delete;
        StateManager& operator=(StateManager const&) = delete;
        StateManager& operator=(StateManager &&) = delete;
        
        static StateManager& instance();

    public:
        static inline constexpr stateId_t INVALID_STATE_ID = -1;

    private:
        StateManager();
        ~StateManager() = default;

        bool stateExists(stateId_t stateId) const;
        void addNewState(stateId_t newStateId, std::unique_ptr<State> newState);
        void setStateAsCurrent(stateId_t stateId);

    private:
        std::unordered_map<stateId_t, std::unique_ptr<State>> _states;
        stateId_t _currentStateId;
    };
}

#endif // STATEMANAGER_H