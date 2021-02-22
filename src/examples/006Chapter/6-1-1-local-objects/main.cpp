#include<iostream>
#include "factorial.h"

using std::cin; using std::cout;

int main()
{   
    auto num = 0;
    cout<<"Enter a number from 1 to 15: ";
    cin>>num;

    if(num > 0 && num < 16)
    {
        cout<<factorial(num);
    }
    else
    {
        std::cerr<<"Invalid number: ";
    }

    return 0;
}