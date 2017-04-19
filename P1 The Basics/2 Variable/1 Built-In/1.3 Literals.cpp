#include <iostream>

int main()
{
	// simple character string literal
	std::cout << "Hello World!"<< std::endl;

	// empty character string literal
	std::cout << "Empty String: " << "";

	// literal using newlines and tabs
	// \n is the new line
	std::cout << "\nCC\toptions\tfile.[cC]\n";

  // multiline string literal
  std::cout << "a really, really long string literal "
	             "that spans two lines" << std::endl;

	// three ways to print a capital M
	std::cout << 'M' << " " << '\115' << " " << '\x4d' << std::endl;

  unsigned long long bigVal = -1ULL;
  std::cout << bigVal << std::endl;

  return 0;
}
