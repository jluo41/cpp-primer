#include <iostream>


int main()
{
	// i is an int
	int i = 1024;
	//p is a pointer to int;
	int *p = &i;
	// r is a reference to int
	int &r = i;

	// three ways to print the value of i
	std::cout << i << " " <<  *p <<  " " << r << std::endl;

	// initilization
	// *p2 = &ji;
	int j = 42, *p2 = &j;

	// the relationship of reference and pointer
	// pref is a reference to the pointer p2
	// p2 return the address of j
	// *p2 return the value of j
	// &object get the address. An address can be a pointer.
	// left and right are different
	int *&pref = p2;

	// prints the value of j, which is the int to which p2 points
	std::cout << *pref << std::endl;

	// pref refers to a pointer; assigning &i to pref makes p point to i
	pref = &i;
	std::cout << *pref << std::endl; // prints the value of i

	// dereferencing pref yields i, the int to which p2 points;
	*pref = 0;  // changes i to 0

	std::cout << i << " " << *pref << std::endl;

	return 0;
}
