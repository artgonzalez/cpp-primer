#include "char_string.h"

using std::string; using std::cout;

void for_range_display_string()
{
    string name("John Doe");

    for(auto c: name)
    {
        cout<<c<<"\n";
    }
}

void char_functions()
{
    string name("Mary Doe");

    cout<<"isalpha "<<isalpha(name[0])<<"\n";
    cout<<"islower "<<islower(name[1])<<"\n";
    cout<<"isspace "<<isspace(name[4])<<"\n";
    tolower(name[0]);

    cout<<name<<"\n";
}

void string_subscript_iteration()
{
    string name("Mary Doe");

    for(decltype(name.size()) index = 0; index !=name.size(); ++ index)
    {
        if(isalpha(name[index]))
            name[index] = toupper(name[index]);
    }

    cout<<name<<"\n";
}