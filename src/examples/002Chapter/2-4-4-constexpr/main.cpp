#include<iostream>
#include "const_expr.h"

int main()
{   
    constexpr int mf = 20; // 20 is a constant expression
    constexpr int limit = mf + 1; // mf + 1 is a constant expression
    constexpr int value = get_value();

    std::cout<<mf<<"\n";
    std::cout<<limit<<"\n";
    std::cout<<value<<"\n";

    return 0;
}