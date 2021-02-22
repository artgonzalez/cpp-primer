#include <iostream>

using std::cout;

/*
Run program:
windows: exa_06_625_exe.exe prog -d -o ofile data0
linux: ./exa_06_625_exe.exe prog -d -o ofile data0
*/
int main(int argc, char *argv[])
{
    auto indx = 0;
    while(indx < argc)
    {
        cout<<argv[indx++]<<"\n";
    }

    return 0;
}