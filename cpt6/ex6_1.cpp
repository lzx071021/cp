//
// Created by 聂师聪 on 2019-03-12.
// ex6.1, ex6.3-ex6.5
//

// ex6_1:
// The terminology parameter is used where we define a function. A function definition use a pair of parentheses to enclose its parameter list. A parameter list can contain zero or more parameters.

// An argument is used to initialize its corresponding parameter where we call a function.

#include <iostream>
#include <cstdlib>
#include "Chapter6.h"

using namespace std;

int fact(int n) {
    if (n < 2)
        return 1;
    return fact(n - 1) * n;
}

int absolute(int n) {
    return (n < 0) ? 0 - n : n;
}

//int main() {
//    cout << "Please enter a number: " << endl;
//    int n;
//    cin >> n;
//    int ret;
//    ret = (rand() % 2) ? fact(n) : absolute(n);
//    cout << ret << endl;
//    return 0;
//}
