#include<iostream>
#include<sstream>
#include<string>

using std::cout; using std::cin; using std::ostringstream;
using std::string; using std::getline;

int main()
{
    ostringstream data;
    string contact_info;

    while(getline(cin, contact_info))
    {
       data << contact_info;        
    }

    cout<<data.str();
    return 0;
}