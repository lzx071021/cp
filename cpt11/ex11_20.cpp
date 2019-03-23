//
// Created by 聂师聪 on 2019-03-22.
// ex11_20, ex11_22, ex11_23
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

using namespace std;



int main() {
    // ex11_20
    map<string, size_t> word_count;
    string word;
    while (cin >> word) {
        auto it = word_count.insert(make_pair(word, 1));
        if (!it.second) ++it.first->second;
    }
    for (const auto &p : word_count)
        cout << p.first << " " << p.second << endl;

    // ex11_22
    map<string, vector<int>> m;
    pair<map<string, vector<int>>::const_iterator, bool> cit = m.insert(pair<string, vector<int>>("Apple", {1,2,3}));

    // ex11_23
    multimap<string, string> mltm;
    string lastName, childName;
    while (cin >> lastName >> childName)
        mltm.insert({lastName, childName});
    for (const auto &p : mltm)
        cout << p.first << " " << p.second << endl;

    return 0;
}
