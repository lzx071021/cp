//
// Created by 聂师聪 on 2019-03-22.
// ex11_3
//
#include <iostream>
#include <string>
#include <cstddef>
#include <map>
#include <set>
#include <iterator>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    map<string, size_t> word_count;
    set<string> exclude{"The", "the", "A", "a", "And", "and"};
    string word;
    while (cin >> word) {
        for (auto &c : word) c = tolower(c);
        auto it = remove_if(word.begin(), word.end(), ispunct);
        if (exclude.find(word) == exclude.cend())
            ++word_count[word];
    }
    for (const auto &word : word_count)
        cout << word.first << " " << word.second << endl;

    return 0;
}
