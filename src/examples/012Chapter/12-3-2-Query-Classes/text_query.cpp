#include "text_query.h"

using std::getline; using std::ifstream; using std::istringstream;
using std::set; using std::string; using std::vector;
using std::shared_ptr;

TextQuery::TextQuery(ifstream& is) : file(new vector<string>)
{
    string text;
    while(getline(is, text))
    {
        file->push_back(text);
        decltype(file->size()) line_number = file->size() - 1;
        istringstream line(text);

        string word;
        while(line >> word)
        {
            auto& lines = word_map[word];

            if(!line)
            {
                lines.reset(new set<line_no>);
            }

            lines->insert(line_number);
        }
    }
}

QueryResult TextQuery::query(const string& sought) const
{
    static shared_ptr<set<line_no>>nodata(new set<line_no>);

    auto loc = word_map.find(sought);

    if(loc == word_map.end())
    {
        return QueryResult(sought, nodata, file);
    }
    else
    {
        return QueryResult(sought, loc->second, file);
    }
}