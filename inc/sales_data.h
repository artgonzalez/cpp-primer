#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>

struct SalesData
{
    std::string book_no;//empty string
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif