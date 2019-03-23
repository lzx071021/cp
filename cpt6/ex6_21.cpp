//
// Created by 聂师聪 on 2019-03-13.
// ex6_21 - ex6_23
//
#include <iostream>
#include <iterator>

using namespace std;

// ex6_21
int larger(const int a, const int *b) {
    if (a <= *b)
        return *b;
    else
        return a;
}

// ex6_22
void swap_ptrs_v1(const int *a, const int *b) {
    // Neither the ptrs nor the objects the ptrs point to changed
    const int *tmp = a;
    a = b;
    b = tmp;
}

void swap_ptrs_v2(int *a, int *b) {
    // Only changed the objects the ptrs point to
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_ptrs_v3(int *&a, int *&b) {
    // Both a and b are references to a pointer that points to a int object
    // As with any other refs, here, a and b are aliases of the corresponding pointer objects
    // Thus, both a and b are pointer type;
    int *tmp = a;
    a = b;
    b = tmp;
}

// ex6_23
void print(const int *i) {
    cout << *i << endl;
}

void print(const int arr[], size_t size) {
    for (size_t i = 0; i != size; cout << arr[i++] << endl);
}

void print(const int *lo, const int *hi) {
    while (lo != hi)
        cout << *lo++ << endl;
}

int main() {
    int a = 5, b = 10, *p = &b;
    int bigger = larger(a, p);
    int *p1 = &a;
    swap_ptrs_v3(p, p1);
    print(&a);
    int arr[] = {1, 2, 3};
    // Alternatively, sizeof(arr) / sizeof(*j), here, *j is equivalent to arr[0]
    print(arr, end(arr) - begin(arr));
    return 0;
}
