#include "while_sum.h"

int sum_while(int num)
{
    auto sum = 0, val = 1;
    
    while (val <= num) 
    {
        sum += val; 
        ++val; 
    }

    return sum;
}