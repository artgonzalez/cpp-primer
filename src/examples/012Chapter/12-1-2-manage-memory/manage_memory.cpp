#include "manage_memory.h"

using std::cout;

void use_dynamic_memory(int num)
{
    int* num_ptr = new int(num);
    cout<<*num_ptr<<"\n";

    delete num_ptr;
}

int* return_ptr_dynamic_memory(int num)
{
    return new int(num);
}

void still_limit_ptr_memory_use(int num)
{
    int* val = return_ptr_dynamic_memory(num);
    cout<<*val<<"\n";
    
    delete val;
}