//
// Created by 聂师聪 on 2019-03-13.
// ex6_31, ex6_33
//

/*
 * ex6_31:
 * We cannot return a ref/ptr that refers(points) to a local object inside a function
 * We make a return ref const where we don't intend to modify the object the ref refers to;
 */
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> vec, vector<int>::size_type ix) {
    static auto sz = vec.size();
    if (!vec.empty() && ix < sz) {
        cout << vec[ix++] << endl;
        print(vec, ix);
    }
}

int main() {
    const vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    vector<int>::size_type ix = 0;
    print(vec, ix);
    return 0;
}
