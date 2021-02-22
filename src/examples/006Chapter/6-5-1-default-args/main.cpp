#include<iostream>
#include "default_arguments.h"

using std::cout;

int main()
{
    auto result = calculate();
    cout<<result<<"\n";
    
    result = calculate(5);
    cout<<result<<"\n";

    result = calculate(5, 5);
    cout<<result<<"\n";

    result = calculate(5, 5, 10);
    cout<<result<<"\n";

    return 0;
}