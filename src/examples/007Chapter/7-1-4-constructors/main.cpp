#include "salesdata.h"
#include<iostream>

using std::cout;

int main()
{
    SalesData data;
    cout<<data.isbn()<<"\n";
    cout<<data.avg_price()<<"\n\n";

    SalesData data1("123456");
    cout<<data1.isbn()<<"\n";
    cout<<data1.avg_price()<<"\n\n";

    SalesData data2("12345", 5, 10.99);
    cout<<data2.isbn()<<"\n";
    cout<<data2.avg_price()<<"\n";

    return 0;
}