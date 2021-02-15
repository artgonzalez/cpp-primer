#include <iostream>

using std::cout;

int main()
{
    int nums[]{1,2,3};
    int *nums_ptr = nums;//point to first element

    if(nums_ptr)
        cout<<"nums_ptr not zero converted to bool first\n";

    int i = 15;
    const int &j = i; //  nonconst to a reference to const int
    const int *p = &i; //address of a nonconst to the address of a const
    cout<<j<<" "<<*p;

    return 0;
}