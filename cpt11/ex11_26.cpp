//
// Created by 聂师聪 on 2019-03-22.
// ex11_26
//
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    // ex11_26
    map<string, vector<int>> m;
    map<string, vector<int>>::key_type subscript_type = "Apple";
    map<string, vector<int>>::mapped_type return_type = m[subscript_type];

    return 0;
}
