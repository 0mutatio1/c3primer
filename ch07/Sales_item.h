#pragma once
#include <string>

class Sales_item {

// friend declarations for nonmember Sales_data operations added
friend Sales_item add(const Sales_item&, const Sales_item&);
friend std::istream& read(std::istream&, Sales_item&);
friend std::ostream& print(std::ostream&, const Sales_item&);

public:            // access specifier added
    Sales_item() = default;
    Sales_item(const std::string& s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p* n) { }
    Sales_item(const std::string& s) : bookNo(s) { }
    Sales_item(std::istream&);
    std::string isbn() const { return bookNo; }
    Sales_item& combine(const Sales_item&);

private:            // access specifier added
    double avg_price() const
    {
        return units_sold ? revenue / units_sold : 0;
    }
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


// declarations for nonmember parts of the Sales_data interface
Sales_item add(const Sales_item&, const Sales_item&);
std::istream& read(std::istream&, Sales_item&);
std::ostream& print(std::ostream&, const Sales_item&);