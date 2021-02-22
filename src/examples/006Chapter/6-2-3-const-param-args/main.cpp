#include<iostream>
#include "call_by_const_reference.h"

using std::cout;

int main()
{
    auto num = 5;
    const_reference_parameter(num);

    cout<<"num value is: "<<num;

    return 0;
}