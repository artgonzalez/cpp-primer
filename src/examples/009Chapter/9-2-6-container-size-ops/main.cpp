#include<iostream>
#include<vector>

using std::cout; using std::vector;

int main()
{
    vector<int> num1 = {3, 9, 8, 4, 2};
    vector<int> num2 = {1,2,3,4};
    vector<int> num3 = {3, 9, 8, 4, 2};

    cout<<(num1 < num2)<<"\n";
    cout<<(num1 < num3)<<"\n";
    cout<<(num1 == num2)<<"\n";
    cout<<(num1 == num3);

    return 0;
}