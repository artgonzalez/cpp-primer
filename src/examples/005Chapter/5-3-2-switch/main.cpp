#include <iostream>

using std::cin; using std::cout;

int main()
{
    auto num = 0;
    cout<<"Enter number: ";
    cin>>num;
    const auto val2 = 2;

    switch (num)//value must evaluate to an int
    {
    case 1://value must be a constant int!
        cout<<"value 1 \n";
        break;
    case val2:
        cout<<"value 2 \n";
        //comment why break was omitted here
    case 3:
        cout<<"value 3 too then break";
        break;
    default://executed when non of the cases match the num value
            //if default not used; include it with no code but break
        cout<<"Invalid value";
        break;
    }


    return 0;
}