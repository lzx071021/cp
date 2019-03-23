//
// Created by 聂师聪 on 2019-03-20.
// ex10_1, ex10_2
//
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> ivec{1,2,3,3,4,5};
    cout << count(ivec.cbegin(), ivec.cend(), 3) << endl;

    list<string> slist{"a", "hello", "kiss", "from", "nature", "aaaa", "a"};
    cout << count(slist.cbegin(), slist.cend(), "a") << endl;

    return 0;
}

