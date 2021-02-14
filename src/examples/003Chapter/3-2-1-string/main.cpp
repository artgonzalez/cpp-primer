#include<iostream>
#include<string>

using std::string; using std::cout;

int main()
{
    string str1;//empty string
    string str2 = str1;//copy of s1
    string str3 = "hiya";//copy of string literal-copy initialization
    string str4(10, 'A');//10 As - direct initialization
    string str5("joe");//copy of joe-direct initialization

    cout<<str1<<" "<<str2<<" "<<str3<<" "<<str4<<" "<<str5;

    return 0;
}