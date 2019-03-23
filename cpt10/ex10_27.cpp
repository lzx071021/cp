//
// Created by 聂师聪 on 2019-03-21.
// ex10_27, ex10_28
//
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iterator>

using namespace std;

int main() {
    // ex10_27
    vector<int> ivec{1, 2, 3, 4, 1, 2, 5, 12};
    for(auto ele : ivec)
        cout << ele << " ";
    cout << endl;
    sort(ivec.begin(), ivec.end());

    list<int> ilst;
    // use a back_inserter
    unique_copy(ivec.cbegin(), ivec.cend(), back_inserter(ilst));
    for (auto ele : ilst)
        cout << ele << " ";
    cout << endl;

    // use an inserter
    list<int> ilst2;
    unique_copy(ivec.cbegin(), ivec.cend(), inserter(ilst2, ilst2.begin()));
    for_each(ilst2.cbegin(), ilst2.cend(),
             [] (const int &ele) {cout << ele << " "; });
    cout << endl;

    // ex10_28
    vector<int> iv{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // use an inserter
    vector<int> iv1;
    copy(iv.cbegin(), iv.cend(), inserter(iv1, iv1.begin()));
    for (auto ele : iv1)
        cout << ele << " ";
    cout << endl;

    // use a front_inserter
    deque<int> idq;
    copy(iv.cbegin(), iv.cend(), front_inserter(idq));
    for (auto ele : idq)
        cout << ele << " ";
    cout << endl;

    // use a back_inserter
    list<int> ilst3;
    copy(iv.cbegin(), iv.cend(), back_inserter(ilst3));
    for (auto ele : ilst3)
        cout << ele << " ";
    cout << endl;


    return 0;
}
