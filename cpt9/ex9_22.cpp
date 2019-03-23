//
// Created by 聂师聪 on 2019-03-17.
// ex9_22
//
#include <iostream>
#include <vector>

using namespace std;

void insert_double(vector<int> &iv, int val) {
    auto it = iv.begin();
    int cnt = 0;
    while (it != (iv.begin() + iv.size() / 2) + cnt) {
        if (*it == val) {
            it = iv.insert(it, val * 2);
            ++it; ++cnt;
        }
        ++it;
    }
}

int main() {
    vector<int> vec{3,2,3,4,5};
    int val = 3;
    insert_double(vec, val);
    for (auto ele : vec) cout << ele << " ";
    cout << endl;
}
