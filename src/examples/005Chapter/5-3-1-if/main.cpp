#include <iostream>

using std::cout;

int main()
{
    auto num = 50;

    if(num < 50)
    {//use braces to avoid scope errors!
        cout<<"failed\n";
        if(true)
            cout<<"executes within curly brace!\n";
    }
    else
    {   //this is executes in the else scope
        auto num = 1;
        //omitting curly braces will always execute this conditional
        //that may not be the intent!
        if(true)
        {

        }
        else if(false)
        {

        }
    }

    if(true)
        if(true)
           ;
    else //this else goes with inner if! use curly braces to avoid confusion   
        ;

    if(true)
    {   //if is a standalone if; curly braces help
        if(true)
           ;
    }
    else 
        ;


    return 0;
}