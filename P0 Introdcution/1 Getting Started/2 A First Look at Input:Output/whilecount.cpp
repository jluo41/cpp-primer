#include <iostream>
using namespace std;

int main()
{
  int sum = 0, val = 1;
  // keep executing the while as long as val is less than or equal to 10
  while (val <= 10)
  {
    // assigns sum + val to sum
    sum += val;
    // add 1 to val
    ++val;
  }
  cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}
