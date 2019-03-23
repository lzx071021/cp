#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item currItem, nextItem;
	if (cin >> currItem) {
		int cnt = 1;
		cout << "This isbn occurs for " << cnt << " times" << endl;
		while (cin >> nextItem) {
			if (currItem.isbn() == nextItem.isbn()) {
				++cnt;
				cout << "This isbn occurs for " << cnt << " times" << endl;
			}
			else {
				cnt = 1;
				cout << "This isbn occurs for " << cnt << " times" << endl;
			}
			currItem = nextItem;
		}
		cout << "This isbn occurs for " << cnt << " times" << endl;
	}
	else {
		cout << "No data?!" << endl;
		return -1;
	}
	return 0;
}
