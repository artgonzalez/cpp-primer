#include "scope_name.h"

using std::cout;  using std::cin;

/*
Variables declared in variable_scope are visible to
the variable_scope function only!
*/
int global_scope = 100;
void variable_scope()
{
    int function_block_scope_only = 0;
    cout<<function_block_scope_only<<" "<<global_scope<<"\n";

    int global_scope = 0;//overrides global scope in scope_name.h

    //use local variable global_scope
    cout<<function_block_scope_only<<" "<<global_scope<<"\n";

    //use global_scope from scope_name.h
    cout<<function_block_scope_only<<" "<<::global_scope<<"\n";

    
}