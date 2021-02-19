#include <iostream>

using std::cin; using std::cout; using std::endl;

int main()
{
    auto i = 0;

    //pretest loop; may not know how many times will loop
    //loop ends with ctrl z 
    while(cin>>i)
    {
        cout<<i<<endl;
    }

    return 0;
}