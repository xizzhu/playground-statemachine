#pragma once

#include <functional>

class DeferredAction
{
public:
    DeferredAction(const std::function<void(void)>& deferred);
    ~DeferredAction();

private:
    // disable copy
    DeferredAction(const DeferredAction&);
    DeferredAction& operator=(const DeferredAction&);

    std::function<void(void)> m_deferred;
};
