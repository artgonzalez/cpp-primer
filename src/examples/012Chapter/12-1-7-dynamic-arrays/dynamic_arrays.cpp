#include "dynamic_arrays.h"

using std::cout; using std::shared_ptr;

int* get_dynamic_array(const std::size_t cnt)
{
    cout<<"Create\n";
    return new int[cnt]();
}

void delete_dynamic_array(int * array)
{
    cout<<"\ndelete\n";
    delete[] array;
}

void use_dynamic_array()
{
    const size_t cnt = 25;
    shared_ptr<int[]> nums (get_dynamic_array(cnt), delete_dynamic_array);

    for(size_t i=0; i < cnt; ++i)
    {
        cout<<nums[i]<<" ";
    }

    
}