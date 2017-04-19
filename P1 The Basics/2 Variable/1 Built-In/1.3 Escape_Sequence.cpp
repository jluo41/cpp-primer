#include <iostream>

int main() {
	// prints a newline
	std::cout << '\n';
	// prints a tab followd by "Hi!" and a newline
	std::cout << "\tHi!\n";
	// prints Hi MOM! followed by a newline
	std::cout << "Hi \x4dO\115!\n";
	// prints M followed by a newline
	std::cout << '\115' << '\n';
	return 0;
}
