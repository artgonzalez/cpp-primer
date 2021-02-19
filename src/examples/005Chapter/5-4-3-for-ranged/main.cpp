#include <iostream>
#include <string>

using std::cout; using std::string;

int main()
{
    string name = "John";

    for(auto c: name)
    {
        cout<<c<<'\n';
    }

    for(auto &c: name)
    {
        c = 'J';
    }
    //value changed with reference; reference to each character in name memory location
    cout<<name;

    return 0;
}