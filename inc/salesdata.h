#ifndef SALES_DATA_CLASS_H
#define SALES_DATA_CLASS_H
#include<iostream>
#include<string>

class SalesData
{
friend std::ostream& display(std::ostream& out, const SalesData& data);

public:
    SalesData(const std::string& bookno = "") : book_no(bookno){}//acts as default constructor
    SalesData(const std::string& bookno, unsigned n, double p) : book_no(bookno),
              units_sold(n), revenue(p*n){}
    std::string isbn() const{return this->book_no;}
    double avg_price()const;

private:
    std::string book_no;//empty string
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif