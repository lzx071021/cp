//
// Created by 聂师聪 on 2019-03-13.
// ex7_2, ex7_6, ex7_7
//

#include <iostream>
#include "ex7_2_Sales_data.h"

using namespace std;

int main() {
    cout << "Reading the first one" << endl;
    Sales_data total;
    if (read(cin, total)){
        cout << "Reading the subsequent ones" << endl;
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
