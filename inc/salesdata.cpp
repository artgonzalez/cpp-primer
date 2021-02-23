#include "salesdata.h"

double SalesData::avg_price()const
{
    if(units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}