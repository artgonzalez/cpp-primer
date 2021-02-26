#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string name("Elvis Presley");

    if(name.compare("king") == 0)
    {
        cout<<"equal\n";
    }
    else if(name.compare("king") > 0)
    {
        cout<<"greater\n";
    }
    else if(name.compare("king") < 0)
    {
        cout<<"less";
    }

    return 0;
}