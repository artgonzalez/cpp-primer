#include "trying.h"

using std::cin;  using std::cout;
using std::runtime_error;

int get_value()
{
    auto num = 0;
    cout<<"Enter number from 1 to 10: ";
    cin>>num;

    if(num < 1 || num > 10)
    {
        throw runtime_error("Number must be from 1 to 10!");
    }

    return num;
}

int get_input()
{
    auto num = 0;
    auto input = true;

    while(input)
    {
        try
        {
            get_value();
            input = false;
        }
        catch(runtime_error err)
        {
            cout<<err.what();
        }
    }

    return num;
}