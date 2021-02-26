#include "shared_pointer.h"

using std::cout; using std::shared_ptr;

int* get_raw_pointer(int num)
{
    cout<<"create \n";
    return new int(num);
}

void delete_raw_pointer(int* num_ptr)
{
    cout<<"delete: \n";
    delete num_ptr;
}

void user_raw_w_smart_ptr()
{
    auto* num = get_raw_pointer(10);
    cout<<"using \n";

    shared_ptr<int> n(num, delete_raw_pointer);
}