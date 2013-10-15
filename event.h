#pragma once

#include <cstdint>

class Event
{
public:
    Event(uint32_t type);
    virtual ~Event();

    uint32_t type() const;

private:
    // disable copy
    Event(const Event&);
    Event& operator=(const Event&);

    uint32_t m_type;
};


class StartEvent : public Event
{
public:
    StartEvent();
    ~StartEvent();

    static const uint32_t EVENT_TYPE;
};
