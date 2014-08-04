#include <string>
#include <iostream>

class CompanyA
{
public:
    void sendClearText(const std::string &msg)
    {
        std::cout << "This is Company A:" << msg << std::endl;
    }
};
