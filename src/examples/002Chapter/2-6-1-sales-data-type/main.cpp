#include<iostream>
#include "sales_data.h"

int main()
{
    SalesData data, data1;

    std::cout<<"Enter isbn: ";
    std::cin>>data.book_no;

    std::cout<<"Enter units old: ";
    std::cin>>data.units_sold;

    std::cout<<"Enter revenue: ";
    std::cin>>data.revenue;

    std::cout<<"Enter isbn: ";
    std::cin>>data1.book_no;

    std::cout<<"Enter units old: ";
    std::cin>>data1.units_sold;

    std::cout<<"Enter revenue: ";
    std::cin>>data1.revenue;

    if(data.book_no == data1.book_no)
    {
        std::cout<<data.units_sold * data.revenue + data1.units_sold * data1.revenue;
    }

    return 0;
}