#include <iostream>

// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name


// reused has global scope
int reused = 42;

int main()
{
	// unique has block scope
	int unique = 0;

	// output #1: uses global reused; prints 42 0
	std::cout << reused << " " << unique << std::endl;

	// new, local object named reused hides global reused
	int reused = 0;

	// output #2: uses local reused; prints 0 0
	std::cout << reused << " " <<  unique << std::endl;

	// output #3: explicitly requests the global reused; prints 42 0
	// the point is here ::reused
	// but do not let it happen in practices.
	std::cout << ::reused << " " <<  unique << std::endl;

	return 0;
}
