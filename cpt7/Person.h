//
// Created by 聂师聪 on 2019-03-14.
//

#ifndef CP_PERSON_H
#define CP_PERSON_H

#include <string>
#include <iostream>

struct Person {
    friend std::istream &read(std::istream&, const Person&);
    friend std::ostream &print(std::ostream&, const Person&);

public:
    // constructors
    Person() = default;
    Person(const std::string &s, const std::string &a) :
            s(myName), a(myAddress) { };

    // member functions
    std::string name() const { return myName; }
    std::string address() const { return myAddress; }

private:
    // data members
    std::string myName;
    std::string myAddress;
};

// non-member interface functions
std::istream &read(std::istream&, const Person&);
std::ostream &print(std::ostream&, const Person&);

std::istream &read(std::istream &is, Person &p) {
    is >> p.myName >> p.myAddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p) {
    os << p.name() << " " << p.address();
    return os;
}

#endif //CP_PERSON_H
