#include <iostream>
#include <string>

using std::cout;
using std::string;

class CompanyB
{
public:
    void sendClearText(const string &msg)
    {
        cout << "This is Company B:" << msg << std::endl;
    }
};
