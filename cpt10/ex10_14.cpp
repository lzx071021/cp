//
// Created by 聂师聪 on 2019-03-20.
// ex10_14 - ex10_19
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "Sales_data.h"

using namespace std;

int sum_ints(int a) {
    auto sum = [a] (int b) { return a + b; };
    int b = 3;
    return sum(b);
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

void print(vector<string> &words) {
    for (auto &s : words)
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

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    print(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &s1, const string &s2) { return s1.size() < s2.size(); });
    print(words);

    // use find_if
//    auto first = find_if(words.cbegin(), words.cend(),
//                         [sz] (const string &s) { return s.size() >= sz; });
//    auto big_num = words.cend() - first;

    // ex10_18: use partition
    auto one_past_last_true = stable_partition(words.begin(), words.end(),
                                        [sz] (const string &s) { return s.size()  > sz; });


    for_each(one_past_last_true, words.end(),
             [] (const string &s) { cout << s << " "; });
    cout << endl;
    words.erase(one_past_last_true, words.end());
    print(words);
}

int main() {
    // ex10_14
    auto f = [] (int a, int b) { return a + b; };
    int ret = f(6, 3);

    // ex10_15
    int ret1 = sum_ints(10);

    // ex10_16
    vector<string> words{"hello", "this", "is", "my", "castle"};
    vector<string>::size_type sz = 5;
    biggies(words, sz);

    // ex10_17
    vector<Sales_data> sdvec;
    Sales_data sd;
    while (read(cin, sd))
        sdvec.push_back(sd);
    for_each(sdvec.cbegin(), sdvec.cend(),
             [] (const Sales_data &sd) { print(cout, sd) << " "; });
    cout << endl;
    stable_sort(sdvec.begin(), sdvec.end(),
         [] (const Sales_data &sd1, const Sales_data &sd2)
             { return sd1.isbn() < sd2.isbn(); });
    for (auto &sd : sdvec)
        print(cout, sd) << " ";
    cout << endl;

    // ex10_19


    return 0;
}
