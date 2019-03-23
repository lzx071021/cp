//
// Created by 聂师聪 on 2019-03-20.
// ex10_11 - ex10_13
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Sales_data.h"

using namespace std;

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

void print(vector<string> &words) {
    for (auto s : words)
        cout << s << " ";
    cout << endl;
}

void elimDups(vector<string> &words) {
    print(words);
    sort(words.begin(), words.end());
    print(words);
    auto end_unique = unique(words.begin(), words.end());
    print(words);
    words.erase(end_unique, words.end());
    print(words);
}

bool comareIsbn(const Sales_data &sd1, const Sales_data &sd2) {
    return sd1.isbn() < sd2.isbn();
}

bool isLonger(const string &s) {
    return s.size() >= 5;
}

int main() {
    // ex10_11
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    print(svec);

    // ex10_12
    vector<Sales_data> sdvec;
    Sales_data sd;
    while (read(cin, sd))
        sdvec.push_back(sd);
    for (auto sd : sdvec)
        print(cout, sd) << " ";
    cout << endl;

    sort(sdvec.begin(), sdvec.end(), comareIsbn);

    for (auto sd : sdvec)
        print(cout, sd) << " ";
    cout << endl;

    // ex10_13
    vector<string> words{"hello", "my", "name", "is", "David"};
    print(words);
    auto one_past_end_iter = partition(words.begin(), words.end(), isLonger);
    print(words);
    words.erase(one_past_end_iter, words.end());
    print(words);
    return 0;
}
