//
// Created by 聂师聪 on 2019-03-16.
// ex9_2, ex9_4, ex9_5
//

#include <iostream>
#include <deque>
#include <list>
#include <vector>

using namespace std;

bool find(vector<int>::const_iterator, vector<int>::const_iterator,
          int);
vector<int>::const_iterator find1(vector<int>::const_iterator,
                                  vector<int>::const_iterator, int);
int main() {
    // ex9_2:
    list<deque<int>> list1;

    vector<int> vec = {1,2,3,4,5};
    bool is_find = find(vec.cbegin(), vec.cend(), 1);

    vector<int>::const_iterator it = find1(vec.cbegin(), vec.cend(), 6);
    return 0;

}

// ex9_3:
bool find(vector<int>::const_iterator iter1,
          vector<int>::const_iterator iter2, int val) {

    while (iter1 < iter2)
        if (val == *iter1++)
            return true;
    return false;
}

// ex9_4:
typedef vector<int>::const_iterator ci;
ci find1(ci it1, ci it2, int val) {
    while (it1 < it2)
        if (val == *it1++)
            return it1;
    return it2;
}
