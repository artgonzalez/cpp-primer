#include "string_chars_ex.h"

using std::cout;  using std::string;
using std::endl;

void change_string_chars_range_for()
{
    string name = "joe";

    for(auto &c: name)
    {
        c = 'a';
    }

    cout<<name<<endl;
}