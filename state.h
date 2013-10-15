#pragma once

#include <functional>

class Event;
class StateImpl;

class State
{
public:
    typedef std::function<void(const Event*)> OnEnterCallback;
    typedef std::function<void(const Event*)> OnExitCallback;

    State();
    virtual ~State();

    void setOnEnterCallback(const OnEnterCallback& onEntered);
    void setOnExitCallback(const OnExitCallback& onExited);

private:
    // disable copy
    State(const State&);
    State& operator=(const State&);

    friend class StateMachineImpl;
    void onEntry(const Event*);
    void onExit(const Event*);

    StateImpl* const p_impl;
};
