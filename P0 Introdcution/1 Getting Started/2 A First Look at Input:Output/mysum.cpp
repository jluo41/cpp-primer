// keep enter the value, the finally get the result
#include <iostream>

int main()
{
	int sum = 0, value = 0;

	// read until end-of-file, calculating a running total of all values read
	while (std::cin >> value)
		// equivalent to sum = sum + value
		sum += value;
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}
