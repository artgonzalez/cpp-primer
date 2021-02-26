#include<iostream>
#include<memory>

using std::cout; using std::shared_ptr;

int main()
{
    shared_ptr<int> num(new int(10));
    auto* num_ptr = num.get();

    delete num_ptr;//don't mix share ptr and native pointers!

    cout<<*num;

    return 0;
}