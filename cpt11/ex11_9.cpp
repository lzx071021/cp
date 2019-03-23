//
// Created by 聂师聪 on 2019-03-22.
// ex11_9, ex11_11
//
#include <iostream>
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
    // ex11_9
    map<string, list<int>> word_line{{"The", {1,2,3,1}},
                                     {"word", {4,5,6}}};
    for (auto &ele : word_line) {
        cout << ele.first << " occurs in lines: ";
        for (auto &i : ele.second) {
            cout << i << " ";
        }
        cout << endl;
    }

    // ex11_11
    using compareType = bool(*)(const Sales_data&, const Sales_data&);
    multiset<Sales_data, compareType> bookstore(compareIsbn);
}

