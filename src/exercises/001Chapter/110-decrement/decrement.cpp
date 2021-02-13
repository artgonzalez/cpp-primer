#include "decrement.h"

void countdown_to_zero(int num1)
{
    while(num1 >= 0)
    {
        std::cout<<num1;
        num1--;        
    }
}