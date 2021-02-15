#include <iostream>

using std::cout;

int main()
{
    cout<<"evaluates 2 > 3 only AND requires two boolean expressions to be true\n";
    
    if(2 > 3 && 5 > 4)
        cout<<"will not display\n";

    if(2 > 3 || 5 > 4)
        cout<<"evalutes both 2 > 3 n 5 > 4 false OR requires one boolean expressions to be true\n";

    if(!(2 > 3 && 5 > 4))
        cout<<"will display because NOT inverts false to true\n";

    int i = 1, j = 2, k = 3;
    if(i < j < k)//true k > 1
        cout<<"true k gt 1\n";
    
    if(i < j && j < k)
        cout<<"true i lt j n j lt k";

    return 0;
}