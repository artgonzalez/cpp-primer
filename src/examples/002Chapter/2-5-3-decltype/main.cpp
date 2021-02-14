#include<iostream>

int main()
{
    const int num = 0, &num_ptr = num;
    decltype(num) a = 0; //const int
    decltype(num_ptr) b_ref = a;//const int reference
    decltype(num + 0) c;

    std::cout<<num<<"\n";
    std::cout<<a<<"\n";
    std::cout<<b_ref<<"\n";
    std::cout<<c<<"\n";

    int num1;
    decltype ((num1)) d = num1;//reference to int double (()) means reference

    return 0;
}