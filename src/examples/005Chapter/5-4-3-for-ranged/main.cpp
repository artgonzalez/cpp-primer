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

    return 0;
}