#include "throwing.h"

using std::cout;

int main()
{   
    auto num = get_input();//throws exception if number not from 1 to 10

    cout<<num;

    return 0;
}

