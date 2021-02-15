#include <iostream>

using std::cout;

int main()
{
    int score = 68;
    score > 70 ? cout<<"pass\n" : cout<<"fail\n";

    cout<<((score > 70) ? "pass" : "fail");
    
    return 0;
}