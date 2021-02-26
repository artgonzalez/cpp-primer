#include "unique_pointer.h"

using std::unique_ptr; using std::move;

int main()
{
    unique_ptr<int> num_ptr = get_unique_pointer(5);
    unique_ptr<int> ptr = move(num_ptr);//num_ptr invalidated

    use_unique_pointer_ref(ptr);
    use_unique_pointer(std::move(ptr));//invalidates ptr
    
    if(ptr == nullptr)
    {
        std::cout<<"null";
    }

    return 0;
}