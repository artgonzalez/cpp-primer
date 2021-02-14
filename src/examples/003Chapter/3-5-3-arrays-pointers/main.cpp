#include <iostream>

using std::cout;

int main()
{
    int nums[] = {1,2,3};
    int *array_ptr = nums;//point to first array element

    cout<<*array_ptr<<"\n\n";

    auto array_ptr1(nums);

    cout<<*array_ptr1<<"\n";//point to first array element
    *array_ptr1++;//point to second element
    cout<<*array_ptr1<<"\n";

    return 0;
}