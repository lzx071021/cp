//
// Created by 聂师聪 on 2019-03-20.
// ex10_3
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    vector<int> iv{1,2,3,4,5};
    cout << accumulate(iv.cbegin(), iv.cend(), 0);
    return 0;
}
