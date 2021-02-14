#include<iostream>
#include "Sales_item.h"

int main()
{
    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*
    wages w = 50;
    std::cout<<w<<"\n";
    
    //c++11
    using SI = Sales_item;
    SI si;
    std::cout<<si.isbn();

    //typedef char *pstring;
    //const pstring cstr = 0; // cstr is a constant pointer to char
    //const pstring *ps; // ps is a pointer to a constant pointer to char

    return 0;
}