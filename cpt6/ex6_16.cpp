//
// Created by 聂师聪 on 2019-03-13.
// ex6_16 - ex6_20
//

/*
 * ex6_18:
 * (a) bool compare(const matrix &a, const matrix &b);
 * (b) vector<int>::iterator change_val(int n, vector<int>::iterator iter); // To change the iter passed into the function
 *
 * ex6_20:
 * If we don't intend to change the argument's value, we should use reference to const;
 * It may unduly limit the type of arguments that can be used with the function if we make a parameter a plain reference;
 * And it may cause surprisingly mistake.
 */
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool any_cap(const string &s) {
    for (decltype(s.size()) i = 0; i != s.size(); ++i) // Traditional for loop
        if (isupper(s[i]))
            return true;
    return false;
}

void to_lower(string &s) {
    for (auto &c : s) // C++11 new feature: range for
        c = tolower(c);
}

int main() {
    string s("HELLO");
    bool cap = any_cap(s);
    to_lower(s);
    cap = any_cap(s);
    return 0;
}

