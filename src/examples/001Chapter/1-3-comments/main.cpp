#include<iostream>
/*
Simple main function:


Read numbers from keyboard and write their sum to screen
*/
int main()
{
    int v1, v2;
    std::cout<<"Enter two numbers: "<<std::endl;
    std::cin>>v1>>v2;

    std::cout<<"The sum of "<<v1<<" and "<<v2 << " is "
             <<v1 + v2;

    return 0;
}
