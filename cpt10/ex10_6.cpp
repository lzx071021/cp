//
// Created by 聂师聪 on 2019-03-20.
// ex10_6
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> iv{0};
    fill_n(iv.begin(), 100, 0);
    for (vector<int>::iterator it = iv.begin(); it != iv.end(); cout << *it++ << endl);
    return 0;
}
