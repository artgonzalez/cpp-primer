#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    const char* str = "Elvis Presley";
    string name;
    name.assign(str, 5); //add Elvis
    cout<<name<<"\n";
    
    name.insert(name.size(), str + 5);
    cout<<name<<"\n";

    name.append(" King");
    cout<<name<<"\n";

    name.replace(14, 4, "The King");
    cout<<name<<"\n";
}