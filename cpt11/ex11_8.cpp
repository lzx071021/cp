//
// Created by 聂师聪 on 2019-03-22.
// ex11_8
//
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;

    // use a set
    set<string> exclude{"The", "and"};
    while (cin >> word)
        if (exclude.find(word) == exclude.end())
            cout << word << endl;

    // use a vector
    vector<string> eld{"The", "and"};
    cin.clear();
    while (cin >> word)
        if (find(eld.cbegin(), eld.cend(), word) == eld.cend())
            cout << word << endl;
}
