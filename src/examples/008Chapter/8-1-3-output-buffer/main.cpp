#include <iostream>

using std::cout; using std::endl;

int main()
{
    cout<<"hello\n";//buffer not flushed
    cout<<"hello"<<endl;//endl flushes buffer

    return 0;
}