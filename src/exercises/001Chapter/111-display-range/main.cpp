/*
prompts the user for two integers.
Print each number in the range specified by those two integers
*/
#include "display_range.h"

int main()
{
    int num1 = 0, num2 = 0;
    std::cout<<"Enter number 1: ";
    std::cin>>num1;

    std::cout<<"Enter number 2: ";
    std::cin>>num2;

    display_range(num1, num2);

    return 0;
}
