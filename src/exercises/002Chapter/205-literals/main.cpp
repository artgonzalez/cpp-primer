#include <iostream>

int main()
{
    auto letter = 'a';//char
    auto lng = L'a';//wchar_t
    auto str = "a";//const char pointer
    auto str2 = L"a";//const wchar_t pointer
    std::cout<<letter<<" "<<lng<<" "<<str<<" "<<str2<<"\n";

    auto n = 10;//int
    auto ui = 10u;//unsigned int
    auto l = 10L;//long
    auto uL = 10ul;//unsigned long 
    std::cout<<n<<" "<<ui<<" "<<l<<" "<<uL<<"\n";

    auto pi = 3.14;//double
    auto pi_f = 3.14f;//float
    auto pi_l = 3.14L;//long double
    std::cout<<pi<<" "<<pi_f<<" "<<pi_l<<"\n";

    auto p = 10.;//double
    auto e = 10e-2;//double

    return 0;
}