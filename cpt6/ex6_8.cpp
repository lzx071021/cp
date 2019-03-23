//
// Created by 聂师聪 on 2019-03-12.
// ex6_8 - ex6_9
//
#include <iostream>
#include "Chapter6.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    int ret;
    ret = (n < 0) ? absolute(n) : fact(n);
    return ret;
}


