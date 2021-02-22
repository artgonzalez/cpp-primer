#include "overload_scope.h"

using std::cout;

void display(int num)
{
    cout<<"int : "<<num<<"\n";
}

void display(double num)
{
    cout<<"double : "<<num<<"\n";    
}