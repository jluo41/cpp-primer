
#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

int main()
{

	string s1  = "hello, ", s2 = "world\n";
	// s3 is hello, world\n
	string s3 = s1 + s2;
	cout << "string s1  = \"hello, \", s2 = \"world\\n\";" << endl;
	cout << s1 << s2 << s3 << endl;

	// equivalent to s1 = s1 + s2
	s1 += s2;
	cout << "s1 += s2; \n";
	cout << s1;

	// no punctuation in s4 or s2
	string s4 = "hello", s5 = "world";
	string s6 = s4 + ", " + s5 + '\n';
	cout << s4 << s5 << "\n" << s6 << endl;
	return 0;
}
