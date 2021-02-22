#include "inline_constexpr.h"
#include <iostream>

using std::cout;

int main()
{
    cout<<in_calculate(5, 5, 10)<<"\n";
    cout<<get_num_const_expr(5);

    return 0;
}