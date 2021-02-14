#include <iostream>

int main()
{
    const double PI = 3.14;
    const double *ptr_PI = &PI;//pointer must be const!
    std::cout<<*ptr_PI<<"\n";

    int num1 = 256;
    int *const const_num1_ptr = &num1;//will always point to num1!
    std::cout<<*const_num1_ptr<<"\n";

    int num2 = 512;
    const int *const const_ptr_num = &num2;//const pointer to const
    std::cout<<*const_ptr_num;

    return 0;
}