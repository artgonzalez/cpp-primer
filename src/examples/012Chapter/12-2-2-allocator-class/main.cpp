#include<iostream>
#include<memory>
#include<string>

using std::cout; using std::allocator; using std::string;

int main()
{
    allocator<string> names_alloc;
    auto n = names_alloc.allocate(25);
    auto ptr = n;

    names_alloc.construct(ptr++, "Joe");
    names_alloc.construct(ptr++, "John");
    names_alloc.construct(ptr++, "Mary");

    cout<<*n<<"\n";
    n++;
    cout<<*n<<"\n";

    while(ptr != n)
    {
        names_alloc.destroy(--ptr);
    }

    return 0;
}