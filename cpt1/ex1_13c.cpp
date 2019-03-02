#include <iostream>

int main()
{
	// Assuming the first integer is the lower one
	std::cout << "Please enter two integers, lower one first" << std::endl;
	int low, high;
	std::cin >> low >> high;
	std::cout << "The in-range numbers are: " << std::endl;
	for (int start = low + 1; start < high - 1; start++)
		std::cout << start << std::endl;
}
