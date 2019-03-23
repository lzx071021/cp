//
// Created by 聂师聪 on 2019-03-21.
// ex10_20, ex10_21
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstddef>

using namespace std;

size_t count_words(const vector<string> &words) {
    return count_if(words.cbegin(), words.cend(),
                    [] (const string &s) { return s.size() > 6; });
}

int main() {
    // ex10_20
    vector<string> words{"The", "library", "defines", "an", "algorithm"};
    cout << count_words(words) << endl;

    // ex10_21
    // capture by value, the outside n is unchanged.
    int n = 10;
    auto f = [=] () mutable { return --n == 0; };
    while (!f());
    cout << n << endl;

    // capture by ref
    int m = 10;
    auto fm = [&] { return --m == 0; };
    while(!fm());
    cout << m << endl;
    return 0;
}

