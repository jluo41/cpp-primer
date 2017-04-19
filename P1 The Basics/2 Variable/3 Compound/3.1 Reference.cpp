#include <iostream>

int main()
{
	int ival = 1024;
	int &refVal = ival;
	// ref is alias
	// correct
	int &refVal3 = refVal;
	// initialized
	int i = refVal;


	// Error: Ref must be initialized.
	// int &refVal2;

	// ri is a reference to i
	int i = 0, &ri = i;

	// ri is just another name for i;
	// this statement prints the value of i twice
	std::cout << i << " " << ri << std::endl;

	// changing i is reflected through ri as well
	//ref and 初始值 bind together, not the value
	i = 5;
	std::cout << i << " " << ri << std::endl;

	// assigning to ri actually assigns to i
	// share the same memory address
	ri = 10;
	std::cout << i << " " << ri << std::endl;

	return 0;
}
