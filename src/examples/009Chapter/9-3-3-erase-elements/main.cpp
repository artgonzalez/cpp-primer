#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{8, 1, 3, 8, 1};
    nums.pop_back();//remove last element

    auto iter = nums.begin();
    nums.erase(iter);//remove first element
   
    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    return 0;
}