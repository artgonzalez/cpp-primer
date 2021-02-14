#include<iostream>
#include<string>

using std::cout;  using std::string;

int main()
{
    string name {"abcdefghijklmnopqrstuvwzyz "};

    auto mid = name.begin() + name.size() / 2;
    cout<<"Mid "<<*mid<<"\n";

    return 0;
}