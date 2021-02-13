/*
Use the decrement
operator to write a while that prints the numbers from ten down to zero
*/
#include "decrement.h"

int main()
{
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    countdown_to_zero(num);

    return 0;
}