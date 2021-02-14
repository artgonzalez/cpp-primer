#include <iostream>

int main()
{
    int num = 512;
    int &num_ref = num;//alias to num==reference
    
    std::cout<<num<<"\n";
    std::cout<<num_ref<<"\n";
    num_ref = 256;

    std::cout<<num<<"\n";

    int &ref = num_ref;
    std::cout<<ref<<"\n";
    
    int i = ref;
    std::cout<<i<<"\n";
    return 0;
}