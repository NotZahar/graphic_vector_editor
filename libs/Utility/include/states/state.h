#ifndef STATE_H
#define STATE_H

namespace Utility {
    class State {
    public:
        using stateId_t = int;
        
        explicit State(const stateId_t stateId);
        virtual ~State() = default;

        State(const State&) = delete;
        State(State&&) = delete;
        State& operator=(State const&) = delete;
        State& operator=(State &&) = delete;

        stateId_t getStateId() const;

    public:
        static inline constexpr State::stateId_t INVALID_STATE_ID = -1;

    protected:
        const stateId_t _stateId;
    };
}

#endif // STATE_H