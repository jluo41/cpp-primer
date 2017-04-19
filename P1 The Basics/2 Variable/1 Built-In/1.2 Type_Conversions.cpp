#include <iostream>

int main()
{
	int i = 42;
	// prints 42
	std::cout << "The value of i is " << i << std::endl;

	// condition will evaluate as true
	if (i)
		i = 0;
	// prints 0
	std::cout << i << std::endl;

	// b is true
	bool b = 42;
	// prints 1
	std::cout <<"bool b = 42; b's value: " << b << std::endl;

	// j has value 1
	int j = b;
	// prints 1
	std::cout << j << std::endl;

	// pi has value 3.14
	double pi = 3.14;
	// prints 3.14
	std::cout << pi << std::endl;

	// j has value 3
	j = pi;
	// prints 3
	std::cout << j << std::endl;

	// assuming 8-bit chars, c has value 255
	unsigned char c = -1;

	// the character with value 255 is an unprintable character
	// assigns value of c (i.e., 255) to an int
	i = c;
	// prints 255
	std::cout << i << std::endl;

	return 0;
}
