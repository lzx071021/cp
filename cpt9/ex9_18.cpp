//
// Created by 聂师聪 on 2019-03-17.
// ex9_18 - ex9_20
//
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>

using namespace std;

void read(istream &is, deque<string> &dq) {
    string str;
    while (is >> str)
        dq.push_back(str);
    is.clear();
}

void read(istream &is, list<string> &lst) {
    string str1;
    while (cin >> str1)
        lst.push_back(str1);
}

int main() {
    // ex9_18
    auto s = cin.rdstate();
    bool b = cin.good();

    deque<string> dq;
    read(cin, dq);
    for (auto cit = dq.cbegin(); cit != dq.cend(); cout << *cit++ << endl);

    bool a = cin.good();
    auto state = cin.rdstate();
    cin.clear();
    auto state1 = cin.rdstate();

    cin.sync();
    // ex9_19
    list<string> lst;
    read(cin, lst);
    for (auto cit = lst.cbegin(); cit != lst.cend(); cout << *cit++ << endl);
}
