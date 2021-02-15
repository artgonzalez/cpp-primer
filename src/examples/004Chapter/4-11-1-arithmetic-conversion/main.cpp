#include <iostream>

using std::cout;

int main()
{   
    int units = 5;
    double rate = 3.5;

    double result = units * rate; //units converted to double before multiplication
    
    cout<<result<<'\n';

    if(units)
        cout<<"units converted to bool ";

    return 0;
}