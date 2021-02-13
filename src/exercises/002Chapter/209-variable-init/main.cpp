#include<iostream>

int main()
{
    int input_value;
    std::cin>>input_value;
    std::cout<<input_value<<"\n";

    int a (3.14);//narrowing int a{3.14};
    std::cout<<a<<"\n";
    double salary, wage;
    salary = wage = 99.99;
    std::cout<<salary<<" "<<wage<<"\n";
    int b = 3.14;
    std::cout<<b;
    return 0;
}