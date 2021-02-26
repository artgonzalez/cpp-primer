#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string str("Hello");
    cout<<str<<"\n";

    char arr[] = {'1', '2'};
    string str1(arr, 2);
    cout<<str1<<"\n";

    string str2("Hello There" + 6, 5);
    cout<<str2<<"\n";


    return 0;
}