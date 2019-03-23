//
// Created by 聂师聪 on 2019-03-21.
// ex10_42
//
#include <iostream>
#include <list>
#include <string>

using namespace std;

void elimDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    list<string> words{"I", "will", "be", "with", "you", "I", "promise"};
    ostream_iterator<string> out_it(cout, " ");
    copy(words.cbegin(), words.cend(), out_it);
    cout << endl;

    elimDups(words);
    copy(words.cbegin(), words.cend(), out_it);
    cout << endl;

    return 0;
}
