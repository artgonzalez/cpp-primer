#include <iostream>

using std::cout;

int main()
{
    //int j = fun1() + fun2(); compiler may evaluate fun2 or fun1 first
    int i = 0;
    cout<<i<<" "<<++i<<"\n";//i may be undefined compiler may evalue i before ++i

    return 0;
}