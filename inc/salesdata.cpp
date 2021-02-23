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

//free functions-friend
std::ostream& display(std::ostream& out, const SalesData& data)
{
    out<<data.isbn()<<" "<<data.avg_price();

    return out;
}