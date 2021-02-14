#include <iostream>

using std::cout;

int main()
{
    int nums[10];//ten ints
    cout<<nums[0]<<'\n';

    unsigned cnt = 42;
    int * nums1[cnt];//42 pointers to int
    
    int num = 10;
    nums1[0] = &num;
    cout<<*nums1[0]<<"\n";

    int nums2[3] = {0, 1, 2};//3 elements
    int nums3[] = {0,1,2};//3 dimension array
    int nums4[5] = {0, 1, 2};// values 0 1 2 0 0
    
    cout<<nums2[0]<<"\n";
    cout<<nums3[1]<<"\n";
    cout<<nums4[2]<<"\n";

    char c1[] = {'C', '+', '+'};
    char c2[] = {'C', '+', '+', '\0'};//null terminated
    char c3[] = "C++";//null terminator implicitly added

    cout<<c1[0]<<"\n";
    cout<<c2[1]<<"\n";
    cout<<c3[2]<<"\n";

    const char c4[7] = "Dariel";//make sure to leave space for null terminator
    cout<<c4;

    return 0;
}