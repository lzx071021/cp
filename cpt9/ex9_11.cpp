//
// Created by 聂师聪 on 2019-03-17.
// ex9_11 - ex9_13, ex9_15, ex9_16
//
#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool compare(list<int>&, vector<int>&);

int main() {
    // ex9_11
    vector<int> vec; // default initialization
    vector<int> vec1(vec); // copy
    vector<int> vec2(10);  // number of elements
    vector<int> vec3(10, 1); // ten ints
    vector<int> vec4{0};   // list initialize
    vector<int> vec5 = vec; // copy
    vector<int> vec6 = {0}; // equivalent to vec4
    vector<int> vec7(vec.cbegin(), vec.cend());

    // ex9_12
    // If you use the copy constructor, the new and the original containers' type must match
    // There is no such restriction on iterator constructor

    // ex9_13
    list<int> l = {1,2,3,4,5};
    vector<int> v = {6,7,8,9,10};

    vector<double> v1(l.begin(), l.end()); // iterator constructor
    vector<double> v2(v.cbegin(), v.cend()); // iterator constructor

    // ex9_15
    if (v1 == v2)
        cout << "v1 == v2" << endl;
    else
        cout << "v1 != v2" << endl;

    // ex9_16
    compare(l, v);
}

// ex9_16
bool compare(list<int> &l, vector<int> &v) {
    if (l.size() != v.size())
        return false;
    auto cit1 = l.cbegin();
    auto cit2 = v.cbegin();
    while (cit1 != l.cend())
        if (*cit1++ != *cit2++)
            return false;
    return true;
}
