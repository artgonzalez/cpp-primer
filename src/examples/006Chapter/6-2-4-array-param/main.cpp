#include <iostream>
#include "array_params.h"

using std::cout;

int main()
{
    int nums[] = {5,1,4,10,8,7};

    display_array(nums, 6);

    std::cout<<"\n";

    display_array_1(nums, 6);

    std::cout<<"\n";

    display_array_2(nums, 6);

    return 0;
}