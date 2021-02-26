#include<iostream>
#include<string>
#include<vector>

using std::cin; using std::cout;
using std::string; using std::vector;

int main()
{   
    string name;
    vector<string> names;

    while(cin>>name)
    {
        names.push_back(name);
    }

    for(auto name: names)
    {
        cout<<name<<"\n";
    }

    return 0;
}