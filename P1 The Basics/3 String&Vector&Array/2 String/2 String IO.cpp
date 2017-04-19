
#include <string>
using std::string;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "First Part" << endl;
    // empty string
    string s;
    // read a whitespace-separated string into s
    cin >> s;
    // write s to the output
    cout << s << endl;

    // 一个string对象，从第一个真正的字符开始读起，知道遇到下一个空白为止。

    cout << "Second Part \n";
    string s1, s2;
    // read first input into s1, second into s2
    cin >> s1 >> s2;
    // write both strings
    cout << s1 << s2 << endl;

    cout << "Third Part\n";
    string word;
    while (cin >> word)
      cout << word << endl;

    return 0;

}
