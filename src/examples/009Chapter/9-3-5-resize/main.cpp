#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{8, 1, 3, 8, 1};
    nums.resize(10, 1);//add 5 elements w value 1

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    cout<<"\n";

    nums.resize(5);//remove added elements

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    return 0;
}