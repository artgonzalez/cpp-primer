#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string name("Elvis Presley");
    auto index = name.find("Pre");

    cout<<index<<"\n";

    index = name.find("king");
    cout<<index<<"\n";

    return 0;
}