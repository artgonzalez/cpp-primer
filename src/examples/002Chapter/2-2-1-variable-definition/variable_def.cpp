#include "variable_def.h"

int get_uninitialized_int()
{
    int value;
    return value;
}

int get_initialized_int()
{
    int value = 0;
    return value;
}

void list_initialization()
{
    int a = 0;
    int b = {0};
    int c{0};
    int d(0);
    std::cout<<a<<b<<c<<d<<"\n";
}

void list_initialize_data_loss()
{
    long double num = 3.1415926536;
    int a{num};//narrowing conversion issue
    int c(num);//decimals truncated

    std::cout<<num<<"\n";
    std::cout<<a<<"\n";
    std::cout<<c<<"\n";
}