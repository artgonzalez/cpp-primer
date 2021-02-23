#include<iostream>
#include "salesdata.h"

using std::cout;

int main()
{
    SalesData data;
    cout<<"avg: "<<data.avg_price()<<"\n";
    cout<<"isbn: "<<data.isbn();
    return 0;
}