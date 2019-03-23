//
// Created by 聂师聪 on 2019-03-22.
// ex11_28, ex11_31, ex11_32
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {
    // ex11_28
    map<string, vector<int>> m{{"Apple", {1,2,3}}};
    map<string, vector<int>>::const_iterator it = m.find("Apple");

    // ex11_31
    multimap<string, string> author_work{
            {"A", "q"},
            {"A", "w"},
            {"C", "t"},
            {"B", "e"},
            {"C", "r"}
    };

    string author("A"), work("e");
    auto beg = author_work.find(author);
    while (beg != author_work.end() && beg->first == author) {
        if (beg->second == work)
            beg = author_work.erase(beg);
        else
            ++beg;
    }
    for (const auto &p : author_work)
        cout << p.first << " " << p.second << endl;

    // ex11_32
    map<string, vector<string>> n_author_work;
    for (const auto &p : author_work)
        n_author_work[p.first].push_back(p.second);
    for (const auto &p : n_author_work) {
        cout << p.first << ": ";
        for (const auto &i : p.second)
            cout << i << " ";
        cout << endl;
    }


    return 0;
}
