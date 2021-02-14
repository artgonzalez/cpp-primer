#include <iostream>

int main()
{
    int num = 512;
    int &num_ref = num;//alias to num==reference

    std::cout<<num<<"\n";
    std::cout<<num_ref<<"\n";
    num_ref = 256;

    std::cout<<num;

    return 0;
}