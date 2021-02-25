#include<algorithm>
#include<iostream>
#include<list>
#include<string>
#include<vector>

using std::cout; using std::list; using std::vector;
using std::string;

int main()
{
    list<string> names;
    vector<const char*> names1{"joe", "john", "mary"};
    vector<const char*> names2{"jake", "pat", "mario"};

    names.assign(names1.cbegin(), names1.cend());

    for(auto name: names)
    {
        cout<<name<<"\n";
    }

    names.assign(4, "Hello");

    for(auto name: names)
    {
        cout<<name<<"\n";
    }

    swap(names1, names2);

    for(auto name: names2)
    {
        cout<<name<<"\n";
    }

    return 0;
}