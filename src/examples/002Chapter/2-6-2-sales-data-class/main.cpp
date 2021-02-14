#include<iostream>
#include "sales_data.h"

int main()
{
    SalesData data1, data2;

    if (data1.book_no == data2.book_no) 
    {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        // print: ISBN, total sold, total revenue, average price per book
        std::cout << data1.book_no << " " << totalCnt
        << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        
        return 0; // indicate success
    }
     else 
    {
         // transactions weren't for the same ISBN
        std::cerr << "Data must refer to the same ISBN"
        << std::endl;
        return -1; // indicate failure
    }

    return 0;
}
