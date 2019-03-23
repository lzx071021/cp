//
// Created by 聂师聪 on 2019-03-14.
//

#ifndef CP_EX7_2_SALES_DATA_H
#define CP_EX7_2_SALES_DATA_H

#include <string>

class Sales_data;
std::istream &read(std::istream&, Sales_data&);

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::istream &read(std::istream&, Sales_data&);
    friend std::ostream &print(std::ostream&, const Sales_data&);

public:
    // constructors
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) { };
    Sales_data(const std::string &s, unsigned n, double p) :
            bookNo(s), units_sold(n), revenue(p*n) { };
    Sales_data(std::istream &is) { read(is, *this); }

    // member functions
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);

private:
    // functions that not part of the class
    double avg_price() const;

    // data members
    std::string bookNo;
    unsigned units_sold{0};
    double revenue{0};
};

// non-member interface function declaration
Sales_data add(const Sales_data&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);

// constructor definition


// member function definition
Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

// non-member interface function definition
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    std::string a;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn()
       << " "
       << item.units_sold
       << " "
       << item.revenue
       << " "
       << item.avg_price();
    return os;
}

#endif //CP_EX7_2_SALES_DATA_H
