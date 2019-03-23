//
// Created by 聂师聪 on 2019-03-13.
// ex7_1
//
#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main() {
    Sales_data total;
    cout << "Reading total" << endl;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        cout << "Reading trans" << endl;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (trans.bookNo == total.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                cout << "The total of the last book is: ";
                cout << total.bookNo << " "
                                     << total.units_sold << " "
                                     << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << total.units_sold << total.revenue << endl;
    }
    else {
        cerr << "No data ?!" << endl;
        return -1;
    }
    return 0;
}

