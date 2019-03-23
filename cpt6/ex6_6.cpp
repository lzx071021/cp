//
// Created by 聂师聪 on 2019-03-12.
// ex6.6-ex6.7
//

// A local variable is created while the control flow passes through its definition statement.

// A parameter is a special local variable where defined only in a function definition.

// A local variable is created before the control flow executes its definition statement and destroyed until the program terminates.
#include <iostream>

using namespace std;

int count_calls();

int main() {
    int local_var = 5; // local variable local_var
    for (int i = local_var; i > 0; --i) // local variable i
        cout << count_calls() << endl;
    return 0;

}

int count_calls() {
    // No parameter
    static int cnt = 0; // static local variable
    return cnt++;
}



