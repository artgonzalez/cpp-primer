#include<iostream>
#include<string>
#include<vector>

using std::cout; using std::string; using std::vector;

int main()
{
    vector<int> nums0;//empty vector
    vector<string> names {"John", "Joe", "Marcos"};

    for(auto name: names)
    {
        cout<<name<<"\n";
    }
    cout<<"\n";
    vector<int> nums1(10, 1) ;//10 elements w value 1
    for(auto num: nums1)
    {
        cout<<num<<"\n";
    }
    cout<<"\n";
    
    vector<int> nums2(10) ;//10 elements w value 0
    for(auto num: nums2)
    {
        cout<<num<<"\n";
    }

    return 0;
}