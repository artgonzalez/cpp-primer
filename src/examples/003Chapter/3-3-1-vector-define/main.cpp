#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string; using std::vector;

int main()
{
    //vector<int> nums;//empty vector of ints
    //vector<int> nums2(nums);//copy nums to nums2

    vector<string> names {"Joe", "John", "Jay"};//3 string elements in vector
    cout<<names[0]<<"\n";//display first element 

    vector<int> nums3(10, 1);//ten int elements w value 1
    vector<int> nums4{10, 1};//2 elements w value 10 and 1
    vector<string> strings (10, "Hello");//ten string elements w value Hello

    cout<<nums3[5]<<"\n";
    cout<<nums4[1]<<"\n";
    cout<<strings[9]<<"\n";

    vector<int> nums5(10);//ten elements w value 0
    vector<int> nums6{10};//one element w value 10

    cout<<nums5[9]<<"\n";
    cout<<nums6[0]<<"\n";

    return 0;
}