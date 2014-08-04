#include "company_a.cpp"
#include "company_b.cpp"
#include "template_derivate.cpp"
#include "template_base.cpp"

int main(int argc, char **argv)
{
    Derivative<CompanyA> c;
    c.sendClearWithLog("Test");
    BaseTemplate<CompanyB> c2;
    c2.sendClear("Test");
    const int i = 0, j = 2;
    j = 3;
    return 0;
}
