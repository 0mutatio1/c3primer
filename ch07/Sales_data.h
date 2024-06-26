#pragma once

#include <string>

struct Sales_data {
    // constructors added
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) { }
    Sales_data(const std::string& s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p* n) { }
    Sales_data(std::istream&);
    // other members as before
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);