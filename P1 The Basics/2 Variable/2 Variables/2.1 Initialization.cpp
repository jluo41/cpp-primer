#include <iostream>
#include <string>


int main() {
	// direct-initialization, functional form
	int v1(1024);

	// copy-initialization
	int v3 = 1024;

	// alternative ways to initialize string from a character string literal
	std::string titleA = "C++ Primer, 5th Ed.";

	std::string titleB("C++ Primer, 5th Ed.");

	std::cout << titleA <<'\n' << titleB << std::endl;

	// all_nines = "9999999999"
	std::string all_nines(10, '9');
	std::cout << "all_nines is " << all_nines <<  std::endl;

	return 0;
}
