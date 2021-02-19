#include <iostream>

using std::cin; using std::cout;

int main()
{   
    auto num = 5;

    num + 1;  //result not saved to use in this program

    cout<<num<<'\n';//num still 5

    
    while(cin>>num); //valid statement; null statement; does nothing
      cout<<num<<'\n'; //this is not part of the loop!
    
    num += 1;//compound statement
    ++num; //add 1 to num
    cout<<num<<'\n';


    return 0;
}