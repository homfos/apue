#include "template_base.cpp"

#include <iostream>

template <typename T>
class Derivative : public BaseTemplate<T>
{
    using BaseTemplate<T>::sendClear;
public:
    void sendClearWithLog(const std::string &msg)
    {
        std::cout << "Add log!" << std::endl;
        sendClear(msg);
    }
};
