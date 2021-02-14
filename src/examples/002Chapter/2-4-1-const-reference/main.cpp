#include<iostream>
#include "const_reference.h"
#include "const_reference_2.h"

int main()
{
    std::cout<<global_const<<"\n";
    //local_const not accessible
    use_extern_const();

    const int num = 512;
    const int &ref_num = num;//can't modify via ref_num const
    
    int num2 = 256;
    const int &ref_num1 = num2;//const ref to non const int; ref read only
    

    return 0;
}