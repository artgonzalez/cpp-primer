#include<iostream>

int main()
{   
    auto num1 = 5, num2 = 10;//initialize to int
    auto value = num1 + num2;//int 

    const int num = 0;
    auto a = num;//int not const
    const auto b = num;//const int

    std::cout<<num1<<"\n";
    std::cout<<num2<<"\n";
    std::cout<<num<<"\n";
    std::cout<<a<<"\n";
    std::cout<<b<<"\n";
    std::cout<<value;

    return 0;
}