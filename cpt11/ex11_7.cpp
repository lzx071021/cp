//
// Created by 聂师聪 on 2019-03-22.
// ex11_7, ex11_8
//
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
    map<string, vector<string>> family;
    string lastName, childName;
    while ([&] () {
        cout << "last name: ";
        return cin >> lastName && lastName != "@q";
    }())

    {
        cout << "child name: ";
        while (cin >> childName && childName != "@q") {
            family[lastName].push_back(childName);
        }
    }

    for (auto &p : family) {
        cout << p.first << " ";
        for (auto &s : p.second)
            cout << s << " ";
        cout << endl;
    }

    return 0;
}

