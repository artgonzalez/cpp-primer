#include "factorial.h"

int factorial(int num)
{
    int fac = 1;

    while(num > 1)
    {
        fac *= num--;
    }

    return fac;
}