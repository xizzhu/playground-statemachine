#include "deferredaction.h"

DeferredAction::DeferredAction(const std::function<void(void)>& deferred)
    : m_deferred(deferred)
{
    // do nothing
}

DeferredAction::~DeferredAction()
{
    if (m_deferred)
        m_deferred();
}
