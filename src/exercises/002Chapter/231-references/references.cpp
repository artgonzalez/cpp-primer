#include "references.h"

int get_int_value_w_reference()
{
    int num = 1.01;
    int &num_ref = num;

    return num_ref;
}

int get_reference_value()
{
    int i, &ri = i;
    i = 5, ri = 10;

    return i + ri;
}