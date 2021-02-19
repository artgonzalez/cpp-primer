#include <iostream>
#include <string>

using std::cin; using std::cout;  using std::string;

int main()
{
    string choice;

    do
    {
        cout<<"Continue, enter yes or no";
        cin>>choice;
    }
    while(!choice.empty() && choice != "no");//can't define variables in condition!

    return 0;
}