#include "varying_parameters.h"

void init_list(std::initializer_list<std::string> params)
{
    for(auto param: params)
    {
        std::cout<<param<<"\n";
    }
}