#include "query_result.h"

using std::endl; using std::ostream; using std::string;

string make_plural(size_t ctr, const string &word,
const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

ostream& print(ostream& out, const QueryResult& qr)
{
    out<<qr.sought<<" occurs "<<qr.lines->size() << " "
       <<make_plural(qr.lines->size(), "time", "s")<<endl;

    for(auto num: *qr.lines)
    {
        out<<"\t(line "<<num + 1 <<") "
           <<*(qr.file->begin() + num) <<endl;
    }

    return out;
}