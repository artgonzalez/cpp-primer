#ifndef SALES_DATA_CLASS_H
#define SALES_DATA_CLASS_H
#include<string>

class SalesData
{
public:
    std::string isbn() const{return this->book_no;}
    double avg_price()const;

private:
    std::string book_no;//empty string
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif