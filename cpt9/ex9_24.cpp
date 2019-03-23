//
// Created by 聂师聪 on 2019-03-17.
// ex9_24
//
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> iv;
    try {
        if (iv.empty())
            throw out_of_range("Please ensure the vector is not empty");
    } catch (out_of_range err) {
        cout << err.what() << endl;
    }
    auto val1 = iv.at(0);
    auto val2 = iv[0];
    auto val3 = iv.front();
    auto val4 = *iv.cbegin();
    cout << val1 <<  " " << val2 << " " << val3 << " " << val4 << endl;
    return 0;
}
