//
// Created by 聂师聪 on 2019-03-17.
// ex9_38, ex9_40
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void read(int);

int main() {
    vector<int> ivec;
    for (vector<int>::size_type i = 0; i != 30; ++i) {
        ivec.push_back(0);
        cout << ivec.size() << " " << ivec.capacity() << endl;
    }
    read(256); // 1024
    read(512); // 1024
    read(1000); // 2048
    read(1048); // 2048
    return 0;
}

void read(int n) {
    vector<string> svec;
    svec.reserve(1024);
    for (vector<string>::size_type i = 0; i != n; ++i)
        svec.push_back("i");
    svec.resize(svec.size() + svec.size() / 2);
    cout << svec.size() << " " << svec.capacity() << endl;
}