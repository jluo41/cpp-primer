#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
  // s1 is an empty string
  string s1;
  // s2 is a copy of s1
  string s2 = s1;
  string s3 = "hiya";
  string s4(10,  'c');
  cout << "s1 is: " << s1 << endl;
  cout << "s3 is: " << s3 <<endl;
  // s4: cccccccccc
  cout << "s4 is: " << s4 << endl;
  string temp(10, 'c');
  string s8 = temp;
  cout << s8 << endl;
}
