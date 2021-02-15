#include <iostream>

using std::cout;

int main()
{
    int num = 16 / 3; //result 5, remainder ignored
    int num1 = 12 / 3; //result 4
    int num2 = 16 % 3; //remainder is 1
    int num3 = -16 % -3; //remainder is -1
    int num4 = -16 / 3; //remainder is -5

    cout<<num<<"\n";
    cout<<num1<<"\n";
    cout<<num2<<"\n";
    cout<<num3<<"\n";
    cout<<num4<<"\n";

    return 0;
}