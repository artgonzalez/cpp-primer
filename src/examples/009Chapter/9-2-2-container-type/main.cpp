#include<algorithm>
#include<iostream>
#include<vector>

using std::cout; using std::vector; using std::find;

int main()
{
    vector<int> v {1, 5, 2, 0, 8, 1};
    auto it = find(v.begin(), v.end(), 0);
    auto index = distance(v.begin(), it);
    
    cout<<index;

    return 0;
}