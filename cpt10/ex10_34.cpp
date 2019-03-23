//
// Created by 聂师聪 on 2019-03-21.
// ex10_34 - ex10_37
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

int main() {
    // ex10_34
    vector<int> iv{1,2,3,4,5};
    for (auto crit = iv.crbegin(); crit != iv.crend(); cout << *crit++ << " ");
    cout << endl;

    // ex10_35
    for (auto cit = iv.cend(); cit != iv.cbegin(); cout << *--cit << " ");
    cout << endl;

    // ex10_36
    list<int> ilst{1,2,3,0,1,2,3};
    // when use *++ on find, the result is 3.
    cout << *find(ilst.crbegin(), ilst.crend(), 0) << endl;

    // ex10_37
    vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
    list<int> ilst1;
    copy(ivec.crbegin() + 3, ivec.crend() - 2 , back_inserter(ilst1));
    for (auto ele : ilst1)
        cout << ele << " ";
    cout << endl;

    return 0;
}


