#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{4, 1, 8, 4, 2, 5};

    auto begin = nums.rbegin();
    auto end = nums.rend();

    while(begin != end)
    {
        *begin = 0;
        ++begin;
    }

    for(auto n: nums)
    {
        cout<<n<<"\n";
    }

    return 0;
}