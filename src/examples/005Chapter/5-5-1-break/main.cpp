#include <iostream>

using std::cin; using std::cout;

int main()
{
    for(auto row = 1; row < 5; ++row )
    {
        for(auto col = 1; col < 5; ++col)
        {
            cout<<row * col<<' ';
            if(row == 2)
            {
                break;//exit inner loop
            }
        }
        
        cout<<std::endl;
    }       

    return 0;
}