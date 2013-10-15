#include "event.h"

Event::Event(uint32_t type)
    : m_type(type)
{
    // do nothing
}

Event::~Event()
{
    // do nothing
}

uint32_t Event::type() const
{
    return m_type;
}


StartEvent::StartEvent()
    : Event(EVENT_TYPE)
{
    // do nothing
}

StartEvent::~StartEvent()
{
    // do nothing
}

const uint32_t StartEvent::EVENT_TYPE(1);
