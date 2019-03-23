#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	// kinda confusing
	// This program can only be used to
	// calculate a consistent trans stream
	Sales_item total;
	if (cin >> total) {
		Sales_item trans;
		while (cin >> trans) {
			if (total.isbn() == trans.isbn())
				total += trans;
			else
				total = trans;
		}
		cout << total << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
