#include<iostream>
#include<vector>

using std::cin; using std::cout;
using std::vector;

int main()
{
    vector<int> nums;
    cout<<"Empty "<<nums.empty()<<"\n";
    cout<<"Size "<<nums.size()<<"\n";

    nums.push_back(5);
    cout<<"Empty "<<nums.empty()<<"\n";
    cout<<"Size "<<nums.size()<<"\n";

    return 0;
}