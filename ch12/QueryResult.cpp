#include "QueryResult.h"

using namespace std;

QueryResult
TextQuery::query(const string& sought) const
{
    // we'll return a pointer to this set if we don't find sought
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    // use find and not a subscript to avoid adding words to wm!
    auto loc = wm.find(sought);
    if (loc == wm.end())
        return QueryResult(sought, nodata, file); // not found
    else
        return QueryResult(sought, loc->second, file);
}

ostream& print(ostream& os, const QueryResult& qr)
{
    // if the word was found, print the count and all occurrences
    os << qr.sought << " occurs " << qr.lines->size() << " "
        << make_plural(qr.lines->size(), "time", "s") << endl;
    // print each line in which the word appeared
    for (auto num : *qr.lines) // for every element in the set
        // don't confound the user with text lines starting at 0
        os << "\t(line " << num + 1 << ") "
        << *(qr.file->begin() + num) << endl;
    return os;
}

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}