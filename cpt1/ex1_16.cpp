#include <iostream>

int main()
{
	int currVal, sum = 0;
	while (std::cin >> currVal)
		sum += currVal;
	std::cout << sum << std::endl;
}
