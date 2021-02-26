#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> nums{8, 1, 3, 8, 1};

    auto val = nums.front();//copy of first element
    val = 0;
    cout<<nums[0]<<" "<<val<<"\n";

    auto &val_ref = nums.front();//direct access to first element
    val_ref = 10;
    cout<<nums[0]<<" "<<val_ref<<"\n";

    return 0;
}