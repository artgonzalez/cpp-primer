#include <iostream>
#include <fstream>
#include <string>

using std::cout; using std::ofstream; using std::ifstream;
using std::string;

int main()
{
    string file = "file.data";

    ofstream out_file(file, std::ios::app);//add append option

    out_file<<"John ";
    out_file<<"Joe ";
    out_file<<"Mary ";

    out_file.close();

    ifstream in_file(file);

    string name;

    while(in_file>>name)
    {
        cout<<name<<"\n";
    }

    in_file.close();

    return 0;
}