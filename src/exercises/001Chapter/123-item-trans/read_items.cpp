#include "sales_item.h"

using std::cout; using std::cin;
using std::string;

void enter_sales_items()
{
    Sales_item item;
    string isbn;
    int count = 0;
    cout<<"Enter item[isbn units price]: ";
    cin >>item;
    isbn = item.isbn();

    while(cin >>item )
    {
        if(isbn == item.isbn())
        {
            count++;
        }
        else
        {
            cout<<item.isbn()<<" count "<<count;
            count = 0;
        }

        isbn = item.isbn();
    }
}