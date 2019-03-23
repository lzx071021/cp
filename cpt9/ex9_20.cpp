//
// Created by 聂师聪 on 2019-03-17.
// ex9_20
//
#include <list>
#include <deque>
#include <vector>

using namespace std;

int main() {
    list<int> lst{1,2,3,4,5};
    deque<int> dq1, dq2;
    for (auto cit = lst.cbegin(); cit != lst.cend();
         (*cit % 2 == 0) ? dq1.push_back(*cit++) : dq2.push_back(*cit++));
}

