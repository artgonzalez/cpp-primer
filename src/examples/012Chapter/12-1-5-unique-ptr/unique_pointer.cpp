#include "unique_pointer.h"

using std::cout;
using std::unique_ptr; using std::make_unique;

unique_ptr<int> get_unique_pointer(int num)
{
    return make_unique<int>(num);
}

void use_unique_pointer(unique_ptr<int> num)
{
    cout<<*num<<"\n";
}

void use_unique_pointer_ref(std::unique_ptr<int>& num)
{
    cout<<*num<<"\n";
}