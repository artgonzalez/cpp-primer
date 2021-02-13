#include<iostream>
#include "variable_def.h"

int main()
{
    unsigned u = 10, u2 = 42;
    std::cout << subtract_unsigned_int(u, u2) << std::endl;
    std::cout << subtract_unsigned_int(u2, u) << std::endl;
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    return 0;
}