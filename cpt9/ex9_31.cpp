//
// Created by 聂师聪 on 2019-03-17.
// ex9_31
//
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> ilst{0,1,2,3,4,5,6,7,8,9};
    auto it = ilst.begin();
    while (it != ilst.end()) {
        if (*it & 1) { // odd
            it = ilst.insert(it, *it);
            ++it; ++it;
        }
        else
            it = ilst.erase(it);
    }
    for (auto ele : ilst) cout << ele << " ";
    cout << endl;
    return 0;
}
