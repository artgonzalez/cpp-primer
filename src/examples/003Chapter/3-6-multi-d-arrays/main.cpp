#include <iostream>

using std::cout;

int main()
{
    constexpr size_t row_cnt = 3, col_cnt = 3;
    int nums [3][3] = {
                       { 1,2,3},
                       { 4,5,6},
                       { 7,8,9}
                     };

    //subscript
    for(size_t i = 0; i != row_cnt; ++i)
    {
        for(size_t j = 0; j != col_cnt; ++j)
            cout<<nums[i][j];
    
        cout<<"\n";
    }

    //reference
    for(const auto &row: nums)//most outer using range must be a reference
    {
        for(auto col: row)//can be by value; most inner loop
            cout<<col;
    
        cout<<"\n";
    }
    //pointer
    int (*p) [3] = nums;//point to nums array
    cout<<p[0][0]<<"\n";

    //iterators
    for(auto i = std::begin(nums); i != std::end(nums); ++i)
    {
        for(auto j = std::begin(*i); j != std::end(*i); ++j)
            cout<<*j<<' ';
        
        cout<<"\n";
    }

    return 0;
}