#include<iostream>
#include "while_sum.h"

int main()
{
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    int sum = sum_while(num);

    std::cout<<"Sum: "<<sum;

    return 0;
}