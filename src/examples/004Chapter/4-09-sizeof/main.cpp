#include <iostream>
#include "sales_data.h"
#include "sales_item.h"

using std::cout;

int main()
{
    cout<<"bytes "<<sizeof(Sales_item)<<"\n";
    cout<<"bytes "<<sizeof(SalesData)<<'\n';
    cout<<"bytes "<<sizeof(int)<<"\n";

    return 0;
}
