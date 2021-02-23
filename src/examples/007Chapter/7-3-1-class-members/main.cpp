#include "screen.h"
#include <iostream>

using std::cout;

int main()
{
    Screen screen(3, 3, 'a');
    cout<<screen.get();

    return 0;
}