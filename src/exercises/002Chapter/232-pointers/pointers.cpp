#include "pointers.h"

int get_ptr_multiplication_value()
{
    int i = 42;
    int *p1 = &i;
    *p1 = *p1 * *p1;

    return *p1;
}