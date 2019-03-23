//
// Created by 聂师聪 on 2019-03-14.
//

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main() {
    Person p;
    cout << "Reading Person" << endl;
    read(cin, p);
    print(cout, p) << endl;
    return 0;
}

