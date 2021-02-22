#include "array_params.h"

using std::cout;

void display_array(const int* nums, int size)
{
    for(int i=0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}
void display_array_1(const int nums[], int size)
{
    for(int i=0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}

void display_array_2(const int nums[10], int size)
{
    for(int i=0; i < size; ++i)
    {
        cout<<nums[i]<<"\n";
    }
}