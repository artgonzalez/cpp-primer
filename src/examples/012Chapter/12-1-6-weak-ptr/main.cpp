#include<iostream>
#include<memory>

using std::cout; using std::shared_ptr; using std::weak_ptr;
using std::make_shared;

int main()
{
    auto num = make_shared<int>(5);
    weak_ptr<int> w_num(num);//use count doesn't increase

    if(shared_ptr<int> p = w_num.lock())//ok to use if not null
    {
        cout<<*p<<"\n";
    }

    num = nullptr;

    if(shared_ptr<int> p = w_num.lock())//ok to use if not null
    {
        cout<<*p<<"\n";
    }
    else
    {
        cout<<"null";
    }

    return 0;
}