#include "strings_exercise.h"

using std::cin; using std::endl;
using std::cout; using std::string;

void read_string_word()
{
    string word;

    while(cin>>word)
    {
        cout<<word<<endl;
    }
}

void read_string_line()
{
    string line;
    cin.clear();

    while(getline(cin, line))
    {
        cout<<line<<endl;
    }

}