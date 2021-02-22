#include <iostream>
#include "call_by_value.h"

using std::cout;

int main()
{
    auto num = 5;

    value_parameter(num);
    cout<<"num value is: "<<num<<"\n";

    pointer_parameter(&num);
    cout<<"num value is: "<<num;

    return 0;
}