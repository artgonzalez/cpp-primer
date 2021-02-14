#include<iostream>
#include "const_reference.h"
#include "const_reference_2.h"

int main()
{
    std::cout<<global_const<<"\n";
    //local_const not accessible
    use_extern_const();
    return 0;
}