#include "state.h"
#include "event.h"


// private implementation

struct StateImpl
{
    State::OnEnterCallback onEntered;
    State::OnExitCallback onExited;
};


// public implementation

State::State()
    : p_impl(new StateImpl)
{
    // do nothing
}

State::~State()
{
    delete p_impl;
}

void State::setOnEnterCallback(const OnEnterCallback& onEntered)
{
    p_impl->onEntered = onEntered;
}

void State::setOnExitCallback(const OnExitCallback& onExited)
{
    p_impl->onExited = onExited;
}

void State::onEntry(const Event* event)
{
    if (p_impl->onEntered)
        p_impl->onEntered(event);
}

void State::onExit(const Event* event)
{
    if (p_impl->onExited)
        p_impl->onExited(event);
}
