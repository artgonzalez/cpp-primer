#include "variable_def.h"

int main()
{
    std::cout<<get_uninitialized_int()<<"\n";
    std::cout<<get_initialized_int()<<"\n";
    list_initialization();
    list_initialize_data_loss();

    return 0;
}