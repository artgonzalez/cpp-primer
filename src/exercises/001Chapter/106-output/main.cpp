/*
Exercise 1.6: Explain whether the following program fragment is legal.
*/
#include<iostream>

int main()
{
    int v1, v2;
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>v1>>v2;

    std::cout << "The sum of " << v1
    << " and " << v2
    << " is " << v1 + v2 << std::endl;

    return 0;
}