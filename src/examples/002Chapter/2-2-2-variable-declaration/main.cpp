#include<iostream>
#include "extern.h"

extern int value;

int main()
{
    std::cout<<value;

    return 0;
}