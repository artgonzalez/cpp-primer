#include "call_by_value.h"

void value_parameter(int num)
{
    num = 5;
}

void pointer_parameter(int* num)
{
    *num = 0;
}