#include<iostream>
#include<sstream>
#include<string>

using std::cout; using std::cin; using std::istringstream;
using std::string; using std::getline;

int main()
{
    string contact_info, info; //name address

    while(getline(cin, contact_info))
    {
        istringstream data(contact_info);

        while(data >> info)
        {
            cout<<info<<"\n";
        }
    }

    return 0;
}