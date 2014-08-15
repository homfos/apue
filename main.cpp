#include "company_a.cpp"
#include "company_b.cpp"
#include "template_derivate.cpp"
#include "template_base.cpp"
#include <string>

void reverseString(std::string *str)
{
    
}

int main(int argc, char **argv)
{
    Derivative<CompanyA> c;
    c.sendClearWithLog("Test");
    BaseTemplate<CompanyB> c2;
    c2.sendClear("Test");
    return 0;
}
