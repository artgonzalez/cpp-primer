#include<iostream>
#include<string>

using std::cout;
using std::string;

int main()
{
    string name {"Hello"};
    auto c = name.begin();
    cout<<*c<<"\n";

    for(auto it = name.begin(); it != name.end(); ++ it)
    {
        *it = toupper(*it);
    }

    cout<<name<<"\n";

    return 0;
}