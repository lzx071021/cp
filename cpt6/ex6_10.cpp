//
// Created by 聂师聪 on 2019-03-12.
// ex6_10,
//
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}
