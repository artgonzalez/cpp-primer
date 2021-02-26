#include "shared_pointer.h"

using std::cout; using std::shared_ptr; using std::make_shared;

void use_shared_pointer(shared_ptr<int> num)
{
    cout<<"num value: "<<*num<<"\n";
    cout<<"count in function "<<num.use_count()<<"\n";
}

void use_shared_pointer_ref(shared_ptr<int>& num)
{
    cout<<"num value: "<<*num<<"\n";
    cout<<"count in function ref "<<num.use_count()<<"\n";
}

shared_ptr<int> get_shared_pointer()
{
    return make_shared<int>();
}