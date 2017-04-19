#include <string>
using std::string;

#include <cctype>
using std::isupper;
using std::toupper;

using std::islower;
using std::tolower;

using std::isalpha;
using std::isspace;

#include <iostream>
using std::cout;
using std::endl;



int main()
{
	string s("Hello, World!!!");
	// punct_cnt has the same type that s.size returns
	// 标点
	string::size_type punct_cnt = 0;

	// count the number of punctuation characters in s
	// for every char in s
	for (string::size_type c = 0; c != s.size(); ++c)
		// if the character is punctuation
		if (ispunct(s[c]))
		  // increment the punctuation counter
			++punct_cnt;

	cout << punct_cnt << " punctuation characters in " << s << endl;

	// convert s to uppercase
	string orig = s;
	for (string::size_type c = 0; c != s.size(); ++c)
		s[c] = toupper(s[c]);
	cout << s << endl;

	// convert first word in s to uppercase
	// restore s to original case
	s = orig;
	string::size_type index = 0;

	// process characters in s until we run out of characters
	// or we hit a whitespace
	while (index != s.size() && !isspace(s[index]))
	{
		// s[index] returns a reference so we can change
		// the underlying character
		s[index] = toupper(s[index]);

		// increment the index to look at the next character
		// on the next iteration
		++index;
	}
	cout << s << endl;
	return 0;
}
