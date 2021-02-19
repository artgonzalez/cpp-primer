#include <iostream>

using std::cin; using std::cout;

int main()
{
    for(auto row = 1; row < 5; ++row )
    {
        if(row == 2)
        {
            continue;//skips the 2s
        }
        for(auto col = 1; col < 5; ++col)
        {
            cout<<row * col<<' ';
            if(row == 3)
            {
                continue;//no effect
            }   
        }
        
        cout<<std::endl;
    }       

    return 0;
}