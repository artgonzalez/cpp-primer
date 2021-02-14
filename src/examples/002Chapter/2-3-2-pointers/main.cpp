#include<iostream>

int main()
{
    int num = 128;
    int *ptr_num;//declare pointer
    ptr_num = nullptr;//better to initialze to null
    ptr_num = &num;//point to num

    std::cout<<*ptr_num<<"\n";//* get the value of the pointer
    
    *ptr_num = 256;
    std::cout<<*ptr_num<<"\n";//* get the value of the pointer
    std::cout<<num<<"\n";

    int num2 = 512;
    ptr_num = &num2;//point to num2

    std::cout<<*ptr_num<<"\n";//* get the value of the pointer
    std::cout<<num2<<"\n";

    //reference to pointer
    int &ref_ptr_num = *ptr_num;
    std::cout<<ref_ptr_num<<"\n";

    return 0;
}