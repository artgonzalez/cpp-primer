#include "manage_memory.h"

using std::cout;

int main()
{
    use_dynamic_memory(10);

    auto* num_ptr = return_ptr_dynamic_memory(5);
    cout<<*num_ptr<<"\n";
    //other code may be here in main, may forget to call delete
    auto& num_ptr2 = num_ptr;
    delete num_ptr;

    //limit use to a function (fewer lines of code to manage), helps w remembering to call delete
    still_limit_ptr_memory_use(15);

    cout<<*num_ptr2<<"\n";//points to deleted memory, be careful!

    return 0;
}