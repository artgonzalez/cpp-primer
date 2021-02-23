#include "sales_data_free_functions.h"

std::ostream& display (std::ostream& out, const SalesData& data1)
{
    out<<data1.isbn()<<" "<<data1.avg_price();

    return out;
}