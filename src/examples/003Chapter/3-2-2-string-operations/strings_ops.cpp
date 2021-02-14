#include<iostream>
#include<string>

using std::string; using std::cin;
using std::cout; using std::endl;

void read_string_with_cin()
{
    string str;
    cout<<"Enter Hello World: ";
    cin>>str;//type Hello World

    cout<<str<<endl;//outputs Hello.  Space World will be ignored
}

void read_string_with_getline()
{
    string str;
    cout<<"Enter Hello World: ";
    getline(cin, str);

    cout<<str<<endl;
}

void use_string_size()
{
    string str = "Hello World";
    auto size = str.size();
    cout<<str<<" "<<size<<endl;
}

void concatenate_string()
{
    string str = "Hello";
    string str1 = "World";
    string str2 = str + " " + str1;
    cout<<str<<" "<<str1<<" "<<str2<<endl;
} 

void concatenate_string_and_literal()
{
    string str = "Hello";
    string str1 = str + " World";
    //string str2 = "yes" + "no"; not legal 
    string str2 = str + " World" + "!";//ok
    //string str3 = "Hello " + " World" + str;//not ok
    cout<<str1<<" "<<str1<<" "<<str2;
}