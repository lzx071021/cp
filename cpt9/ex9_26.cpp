//
// Created by 聂师聪 on 2019-03-17.
// ex9_26
//
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {
    vector<int> vec{0,1,1,2,3,5,8,13,21,34,55,89}, v(vec);
    list<int> l;
    for (auto ele : vec) l.push_back(ele);

    auto vit = v.begin();
    while (vit != v.end()) {
        if (!(*vit % 2))
            vit = v.erase(vit);
        else
            ++vit;
    }

    auto lit = l.begin();
    while (lit != l.end()) {
        if (*lit % 2)
            lit = l.erase(lit);
        else
            ++lit;
    }

    for (auto ele : v)
        cout << ele << " ";
    cout << endl;

    for (auto ele : l)
        cout << ele << " ";
    cout << endl;
}



