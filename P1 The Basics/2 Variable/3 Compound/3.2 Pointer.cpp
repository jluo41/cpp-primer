#include <iostream>
using std::cout;
using std::endl;

int main()
{
    // ip1 and ip2 are pointers for int
    int *ip1, *ip2;
    // dp2 is pointer for double, dp is an object of double
    double dp, *dp2;


    int ival = 1024;

    // pointers contain the address.
    // pi points to an int
    // &obj get the address of object
    // p contains ival's address.
    int *pi = &ival;

    // ppi points to a pointer to an int
    int **ppi = &pi;
    cout << "The value of ival\n"
         << "direct value: " << ival << "\n"
         << "indirect value: " << *pi << "\n"
         << "doubly indirect value: " << **ppi
         << endl;

  int i = 42;
  // & is a part of declaration
  int &r = i;
  int *p;
  p = &i;
  // * is in expression
  *p = i;

  int &r2 = *p;

	int i = 2;
	int *p1 = &i;     // p1 points to i
	*p1 = *p1 * *p1;  // equivalent to i = i * i
	cout << "i  = " << i << endl;

	*p1 *= *p1;       // equivalent to i *= i
	cout << "i  = " << i << endl;

  // void pointers
  double obj = 3.14, *pd = &obj;
  void *pv = &obj;
  // pv can be the pointers point to any type.
  pv = pd;

	return 0;
}
