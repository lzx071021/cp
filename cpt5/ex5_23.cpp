//
// Created by 聂师聪 on 2019-03-17.
// ex5_23 - ex5_25
//
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        try {
            if (b == 0)
                throw runtime_error("The second integer must not be zero");
            cout << a / b << endl;
        } catch (runtime_error err) {
            cout << err.what() << "\nTry again?" << endl;
        }
    }
    return 0;
}
