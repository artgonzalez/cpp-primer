#include <iostream>
#include <string>

using std::cout; using std::string;

int main()
{   
    string name = "John";
    string *name_ptr = &name;

    auto size = (*name_ptr).size();
    cout<<size<<"\n";
    size = name_ptr->size();
    cout<<size<<"\n";

    return 0;
}