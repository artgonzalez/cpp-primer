#include "sum_range.h"

int sum_range(int num1, int num2)
{
    int sum = 0;

    while(num1 <= num2)
    {
        sum = sum + num1;
        num1++;
    }

    return sum;
}