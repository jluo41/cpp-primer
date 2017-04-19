
#include <string>
using std::string;

#include <iostream>
using std::cout; using std::cin; using std::endl;

// empty string
string st1;
// st2 is a copy of st1
string st2(st1);

int main()
{
    cout << "st1.empty() returns " << st1.empty()<< endl;

    string st("The expense of spirit");
    cout << "The size of " << "\"" << st << "\""<< " is: " << st.size()
         << " characters" << endl;


    string line;
    // read input a line at a time and print lines that are longer than 80 characters
    while (getline(cin, line))
    {

      cout << "The line's size is " << line.size() << endl;
      if (line.size() > 15) cout << line << endl;
    }
    return 0;
}
