#ifndef TEMPLATE_BASE_CPP_
#define TEMPLATE_BASE_CPP_

#include <string>

template <typename T>
class BaseTemplate
{
public:
    void sendClear(const std::string &msg)
    {
        T company;
        company.sendClearText(msg);
    }
};

#endif
