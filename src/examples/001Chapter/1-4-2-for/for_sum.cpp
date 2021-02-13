#include "for_sum.h"

int sum_for(int num)
{
    int sum = 0;

    for (int val = 1; val <= num; ++val)
        sum += val;

    return sum;
}