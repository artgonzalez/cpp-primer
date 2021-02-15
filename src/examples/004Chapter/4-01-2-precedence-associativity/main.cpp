#include <iostream>

using std::cout;

int main()
{
    cout<<5 + 10 * 20 / 2<<"\n";
    cout<<(5 + 10) * 20 / 2<<"\n";    

    int num[] = {1,2,3,4,6};
    int value = *(num + 4);//num[6]
    cout<<value<<"\n";

    value = *num + 4; //num[0] + 4
    cout<<value<<std::endl;

    return 0;
}