//
// Created by 聂师聪 on 2019-03-22.
// ex11_12 - ex11_14
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;



int main() {
    // ex11_12
//    vector<pair<string, int>> pvec;
//    string str;
//    int n;
//    while (cin >> str >> n) {
//        pvec.push_back(make_pair(str, n)); // The most readable way
//        // ex11_13
//        pvec.push_back({str, n});
//        pvec.push_back(pair<string, int>(str, n));
//        pvec.emplace_back(str, n); // The easiest way as well as the best one
//    }
//    for (const auto &p : pvec)
//        cout << p.first << " " << p.second << endl;

    // ex11_14
    map<string, vector<pair<string, string>>> family;
    string lastName, childName, childBirth;
    while ([&] () {
        if (cin.good()) cout << "last name: ";
        return cin >> lastName && lastName != "@q";
    }()) {
        cout << "child name and birthday: ";
        while (cin >> childName >> childBirth)
            family[lastName].emplace_back(childName, childBirth);
    }

    for (const auto &fp : family) {
        cout << fp.first << ": " << endl;
        for (const auto &vp : fp.second) {
            cout << vp.first << " " << vp.second;
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

