#include<iostream>
#include<limits>

using std::cin; using std::cout;

int main()
{
    auto num = 0;

    do
    {
        cout<<"Enter num: ";
        cin>>num;

        if(cin.fail())
        {
            std::cerr<<"Error\n";
            cin.clear();    
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');    
            cout<<"Enter num: ";
            cin>>num;
        }
    }
    while(cin.fail());
    

    return 0;
}