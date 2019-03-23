//
// Created by 聂师聪 on 2019-03-13.
// ex6_11 - ex6_15
//

/*
 * ex6_13:
 * The argument to initialize T in f(T) is copied into f(T);
 * The argument to initialize T in f(T) is passed by reference, hence T is another name of the argument.
 *
 * ex6_14:
 * where to use reference parameters: avoid to copy objects of large class types or large containers;
 *                                    need to change arguments' value;
 *                                    return multiple results;
 * Where to use non-reference parameters : don't wanna change the arguments' value and the argument objects are not too large;
 *
 * ex6_15:
 * S is a ref to const because we don't wanna change s inside the function and the cost to copy a string type object may be unacceptable;
 * Conversely, we want use plain ref occurs to store the cnt of target char and implicitly return its value;
 * The cost to copy a char type object is way too small;
 */
#include <iostream>

using namespace std;

void reset(int &i) {
    i = 0;
}

void swap(int &a, int &b) {
    // It's more succinct and efficient to use reference parameters
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 5, b = 10;
    swap(a, b);
    cout << a << " " << b << endl;
    reset(a);
    cout << a << endl;
    return 0;
}
