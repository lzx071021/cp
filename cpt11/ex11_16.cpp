//
// Created by 聂师聪 on 2019-03-22.
// ex11_16 - ex11_19
//
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <string>
#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    // ex11_16
    map<string, size_t> m{{"Apples", 3}};
    auto it = m.begin();
    it->second = 5;

    // ex11_17
    multiset<string> c;
    vector<string> v{"The", "world"};
    copy(v.begin(), v.end(), inserter(c, c.end()));
    if (!c.empty()) {
        for (auto &s : c)
            cout << s << endl;
    }

    // ex11_18
    map<string, size_t> word_count;
    map<string, size_t>::const_iterator map_cit = word_count.cbegin();

    // ex11_19
    using compareType = bool(*)(const Sales_data&, const Sales_data&);
    multiset<Sales_data, compareType> bookstore(compareIsbn);
    multiset<Sales_data, compareType>::const_iterator mset_cit = bookstore.cbegin();

    return 0;
}

