//
// Created by 聂师聪 on 2019-03-20.
// ex10_9
//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

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

int main() {
    vector<string> svec{"my", "name", "is", "my", "own"};
    elimDups(svec);
    return 0;
}
