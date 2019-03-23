#include <iostream>

int main()
{
	// Assuming the first integer is the lower one
	std::cout << "Pleas enter two integers, lower one first" << std::endl;
	int low, high;
	std::cin >> low >> high;
	std::cout << "The in-range numbers are: " << std::endl;
	while (low < high - 1)
		std::cout << ++low << std::endl;
}
