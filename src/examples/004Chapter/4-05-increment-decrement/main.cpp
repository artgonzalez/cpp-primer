#include <iostream>

using std::cout;

int main()
{
    int a = 0;
    cout<<++a<<"\n";//yields incremented value
    cout<<a++<<"\n";//yields unincremented value

    int nums[]{1,2,3,4, -1};
    int *ptr_nums = nums;

    //combine dereference and increment
    while(*ptr_nums != -1)
    {
        cout<<*ptr_nums++<<"\n";
    }

    return 0;
}